#include <glib-object.h>
#include <json-glib/json-glib.h>

#include "DefaultManager.h"
#include "NetClient.h"
#include "Helpers.h"
#include "Error.h"
#include "RequestInfo.h"

using namespace std;
using namespace Tizen::ArtikCloud;


DefaultManager::DefaultManager()
{

}

DefaultManager::~DefaultManager()
{

}

static gboolean __DefaultManagerresponseHandler(gpointer data)
{
	RequestInfo *request = static_cast<RequestInfo*>(data);
	g_thread_join(request->thread);

	// invoke the callback function
	bool retval = request->processor(*(request->p_chunk), *(request->code), request->errormsg, request->userData, request->handler);

	delete request;
	return FALSE;
}

static gpointer __DefaultManagerthreadFunc(gpointer data)
{
	RequestInfo *request = static_cast<RequestInfo*>(data);

	// handle the request
	NetClient::easycurl(request->host, request->path, request->method, request->queryParams,
	request->mBody, request->headerList, request->p_chunk, request->code, request->errormsg);

	request->thread = g_thread_self();
	g_idle_add(__DefaultManagerresponseHandler, static_cast<gpointer>(request));

	return NULL;
}


static bool getApiAllJsonProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
	void(* voidHandler)())
{
	void(* handler)(AnyType, Error, void* )
	= reinterpret_cast<void(*)(AnyType, Error, void* )> (voidHandler);
	
	JsonNode* pJson;
	char * data = p_chunk.memory;

	
	AnyType out;

	if (code >= 200 && code < 300) {
		Error error(code, string("No Error"));




		if (isprimitive("AnyType")) {
			pJson = json_from_string(data, NULL);
			jsonToValue(&out, pJson, "AnyType", "AnyType");
			json_node_free(pJson);

			if ("AnyType" == "std::string") {
				string* val = (std::string*)(&out);
				if (val->empty() && p_chunk.size>4) {
					*val = string(p_chunk.memory, p_chunk.size);
				}
			}
		} else {
			
			out.fromJson(data);
			char *jsonStr =  out.toJson();
			printf("\n%s\n", jsonStr);
			g_free(static_cast<gpointer>(jsonStr));
			
		}
		handler(out, error, userData);
		return true;
		//TODO: handle case where json parsing has an error

	} else {
		Error error;
		if (errormsg != NULL) {
			error = Error(code, string(errormsg));
		} else if (p_chunk.memory != NULL) {
			error = Error(code, string(p_chunk.memory));
		} else {
			error = Error(code, string("Unknown Error"));
		}
		 handler(out, error, userData);
		return false;
			}
}

static bool getApiAllJsonHelper(char * accessToken,
	
	void(* handler)(AnyType, Error, void* )
	, void* userData, bool isAsync)
{

	//TODO: maybe delete headerList after its used to free up space?
	struct curl_slist *headerList = NULL;

	
	string accessHeader = "Authorization: Bearer ";
	accessHeader.append(accessToken);
	headerList = curl_slist_append(headerList, accessHeader.c_str());
	headerList = curl_slist_append(headerList, "Content-Type: application/json");

	map <string, string> queryParams;
	string itemAtq;
	
	string mBody = "";
	JsonNode* node;
	JsonArray* json_array;

	string url("/api/all.json");
	int pos;


	//TODO: free memory of errormsg, memorystruct
	MemoryStruct_s* p_chunk = new MemoryStruct_s();
	long code;
	char* errormsg = NULL;
	string myhttpmethod("GET");

	if(strcmp("PUT", "GET") == 0){
		if(strcmp("", mBody.c_str()) == 0){
			mBody.append("{}");
		}
	}

	if(!isAsync){
		NetClient::easycurl(DefaultManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = getApiAllJsonProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

		curl_slist_free_all(headerList);
		if (p_chunk) {
			if(p_chunk->memory) {
				free(p_chunk->memory);
			}
			delete (p_chunk);
		}
		if (errormsg) {
			free(errormsg);
		}
		return retval;
	} else{
		GThread *thread = NULL;
		RequestInfo *requestInfo = NULL;

		requestInfo = new(nothrow) RequestInfo (DefaultManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), getApiAllJsonProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __DefaultManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool DefaultManager::getApiAllJsonAsync(char * accessToken,
	
	void(* handler)(AnyType, Error, void* )
	, void* userData)
{
	return getApiAllJsonHelper(accessToken,
	
	handler, userData, true);
}

bool DefaultManager::getApiAllJsonSync(char * accessToken,
	
	void(* handler)(AnyType, Error, void* )
	, void* userData)
{
	return getApiAllJsonHelper(accessToken,
	
	handler, userData, false);
}

static bool getApiProductCycleJsonProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
	void(* voidHandler)())
{
	void(* handler)(Cycle, Error, void* )
	= reinterpret_cast<void(*)(Cycle, Error, void* )> (voidHandler);
	
	JsonNode* pJson;
	char * data = p_chunk.memory;

	
	Cycle out;

	if (code >= 200 && code < 300) {
		Error error(code, string("No Error"));




		if (isprimitive("Cycle")) {
			pJson = json_from_string(data, NULL);
			jsonToValue(&out, pJson, "Cycle", "Cycle");
			json_node_free(pJson);

			if ("Cycle" == "std::string") {
				string* val = (std::string*)(&out);
				if (val->empty() && p_chunk.size>4) {
					*val = string(p_chunk.memory, p_chunk.size);
				}
			}
		} else {
			
			out.fromJson(data);
			char *jsonStr =  out.toJson();
			printf("\n%s\n", jsonStr);
			g_free(static_cast<gpointer>(jsonStr));
			
		}
		handler(out, error, userData);
		return true;
		//TODO: handle case where json parsing has an error

	} else {
		Error error;
		if (errormsg != NULL) {
			error = Error(code, string(errormsg));
		} else if (p_chunk.memory != NULL) {
			error = Error(code, string(p_chunk.memory));
		} else {
			error = Error(code, string("Unknown Error"));
		}
		 handler(out, error, userData);
		return false;
			}
}

static bool getApiProductCycleJsonHelper(char * accessToken,
	AnyType product, AnyType cycle, 
	void(* handler)(Cycle, Error, void* )
	, void* userData, bool isAsync)
{

	//TODO: maybe delete headerList after its used to free up space?
	struct curl_slist *headerList = NULL;

	
	string accessHeader = "Authorization: Bearer ";
	accessHeader.append(accessToken);
	headerList = curl_slist_append(headerList, accessHeader.c_str());
	headerList = curl_slist_append(headerList, "Content-Type: application/json");

	map <string, string> queryParams;
	string itemAtq;
	
	string mBody = "";
	JsonNode* node;
	JsonArray* json_array;

	string url("/api/{product}/{cycle}.json");
	int pos;

	string s_product("{");
	s_product.append("product");
	s_product.append("}");
	pos = url.find(s_product);
	url.erase(pos, s_product.length());
	url.insert(pos, stringify(&product, "AnyType"));
	string s_cycle("{");
	s_cycle.append("cycle");
	s_cycle.append("}");
	pos = url.find(s_cycle);
	url.erase(pos, s_cycle.length());
	url.insert(pos, stringify(&cycle, "AnyType"));

	//TODO: free memory of errormsg, memorystruct
	MemoryStruct_s* p_chunk = new MemoryStruct_s();
	long code;
	char* errormsg = NULL;
	string myhttpmethod("GET");

	if(strcmp("PUT", "GET") == 0){
		if(strcmp("", mBody.c_str()) == 0){
			mBody.append("{}");
		}
	}

	if(!isAsync){
		NetClient::easycurl(DefaultManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = getApiProductCycleJsonProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

		curl_slist_free_all(headerList);
		if (p_chunk) {
			if(p_chunk->memory) {
				free(p_chunk->memory);
			}
			delete (p_chunk);
		}
		if (errormsg) {
			free(errormsg);
		}
		return retval;
	} else{
		GThread *thread = NULL;
		RequestInfo *requestInfo = NULL;

		requestInfo = new(nothrow) RequestInfo (DefaultManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), getApiProductCycleJsonProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __DefaultManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool DefaultManager::getApiProductCycleJsonAsync(char * accessToken,
	AnyType product, AnyType cycle, 
	void(* handler)(Cycle, Error, void* )
	, void* userData)
{
	return getApiProductCycleJsonHelper(accessToken,
	product, cycle, 
	handler, userData, true);
}

bool DefaultManager::getApiProductCycleJsonSync(char * accessToken,
	AnyType product, AnyType cycle, 
	void(* handler)(Cycle, Error, void* )
	, void* userData)
{
	return getApiProductCycleJsonHelper(accessToken,
	product, cycle, 
	handler, userData, false);
}

static bool getApiProductJsonProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
	void(* voidHandler)())
{
	void(* handler)(AnyType, Error, void* )
	= reinterpret_cast<void(*)(AnyType, Error, void* )> (voidHandler);
	
	JsonNode* pJson;
	char * data = p_chunk.memory;

	
	AnyType out;

	if (code >= 200 && code < 300) {
		Error error(code, string("No Error"));




		if (isprimitive("AnyType")) {
			pJson = json_from_string(data, NULL);
			jsonToValue(&out, pJson, "AnyType", "AnyType");
			json_node_free(pJson);

			if ("AnyType" == "std::string") {
				string* val = (std::string*)(&out);
				if (val->empty() && p_chunk.size>4) {
					*val = string(p_chunk.memory, p_chunk.size);
				}
			}
		} else {
			
			out.fromJson(data);
			char *jsonStr =  out.toJson();
			printf("\n%s\n", jsonStr);
			g_free(static_cast<gpointer>(jsonStr));
			
		}
		handler(out, error, userData);
		return true;
		//TODO: handle case where json parsing has an error

	} else {
		Error error;
		if (errormsg != NULL) {
			error = Error(code, string(errormsg));
		} else if (p_chunk.memory != NULL) {
			error = Error(code, string(p_chunk.memory));
		} else {
			error = Error(code, string("Unknown Error"));
		}
		 handler(out, error, userData);
		return false;
			}
}

static bool getApiProductJsonHelper(char * accessToken,
	AnyType product, 
	void(* handler)(AnyType, Error, void* )
	, void* userData, bool isAsync)
{

	//TODO: maybe delete headerList after its used to free up space?
	struct curl_slist *headerList = NULL;

	
	string accessHeader = "Authorization: Bearer ";
	accessHeader.append(accessToken);
	headerList = curl_slist_append(headerList, accessHeader.c_str());
	headerList = curl_slist_append(headerList, "Content-Type: application/json");

	map <string, string> queryParams;
	string itemAtq;
	
	string mBody = "";
	JsonNode* node;
	JsonArray* json_array;

	string url("/api/{product}.json");
	int pos;

	string s_product("{");
	s_product.append("product");
	s_product.append("}");
	pos = url.find(s_product);
	url.erase(pos, s_product.length());
	url.insert(pos, stringify(&product, "AnyType"));

	//TODO: free memory of errormsg, memorystruct
	MemoryStruct_s* p_chunk = new MemoryStruct_s();
	long code;
	char* errormsg = NULL;
	string myhttpmethod("GET");

	if(strcmp("PUT", "GET") == 0){
		if(strcmp("", mBody.c_str()) == 0){
			mBody.append("{}");
		}
	}

	if(!isAsync){
		NetClient::easycurl(DefaultManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = getApiProductJsonProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

		curl_slist_free_all(headerList);
		if (p_chunk) {
			if(p_chunk->memory) {
				free(p_chunk->memory);
			}
			delete (p_chunk);
		}
		if (errormsg) {
			free(errormsg);
		}
		return retval;
	} else{
		GThread *thread = NULL;
		RequestInfo *requestInfo = NULL;

		requestInfo = new(nothrow) RequestInfo (DefaultManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), getApiProductJsonProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __DefaultManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool DefaultManager::getApiProductJsonAsync(char * accessToken,
	AnyType product, 
	void(* handler)(AnyType, Error, void* )
	, void* userData)
{
	return getApiProductJsonHelper(accessToken,
	product, 
	handler, userData, true);
}

bool DefaultManager::getApiProductJsonSync(char * accessToken,
	AnyType product, 
	void(* handler)(AnyType, Error, void* )
	, void* userData)
{
	return getApiProductJsonHelper(accessToken,
	product, 
	handler, userData, false);
}

