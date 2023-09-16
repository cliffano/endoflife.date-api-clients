--  endoflife.date
--  Documentation for the endoflife.date API. The API is currently in Alpha. Additional information about the API can be found on the [endoflife.date wiki](https://github.com/endoflife_date/endoflife.date/wiki)
--
--  The version of the OpenAPI document: 0.0.1
--  Contact: blah@cliffano.com
--
--  NOTE: This package is auto generated by OpenAPI-Generator 7.0.0.
--  https://openapi-generator.tech
--  Do not edit the class manually.

pragma Warnings (Off, "*is not referenced");
with Swagger.Streams;
with Swagger.Servers.Operation;
package body .Skeletons is
   pragma Style_Checks ("-bmrIu");
   pragma Warnings (Off, "*use clause for package*");

   use Swagger.Streams;

   Media_List_1 : aliased constant Swagger.Mime_List := (
     1 => Swagger.Mime_Json);

   package body Skeleton is


      package API_Get_Api_All_Json is
         new Swagger.Servers.Operation
            (Handler => Get_Api_All_Json,
             Method  => Swagger.Servers.GET,
             URI     => URI_Prefix & "/api/all.json",
             Mimes   => Media_List_1'Access);

      --  All Products
      procedure Get_Api_All_Json
         (Req     : in out Swagger.Servers.Request'Class;
          Reply   : in out Swagger.Servers.Response'Class;
          Stream  : in out Swagger.Servers.Output_Stream'Class;
          Context : in out Swagger.Servers.Context_Type) is
         Impl : Implementation_Type;
         Result : .Models.AnyType_Type;
      begin
         
         
         Impl.Get_Api_All_Json (Result, Context);
         if Context.Get_Status = 200 then
            Context.Set_Description ("OK");


            Stream.Start_Document;
            .Models.Serialize (Stream, "", Result);
            Stream.End_Document;

            return;
         end if;
      end Get_Api_All_Json;

      package API_Get_Api_Product_Cycle_Json is
         new Swagger.Servers.Operation
            (Handler => Get_Api_Product_Cycle_Json,
             Method  => Swagger.Servers.GET,
             URI     => URI_Prefix & "/api/{product}/{cycle}.json",
             Mimes   => Media_List_1'Access);

      --  Single cycle details
      procedure Get_Api_Product_Cycle_Json
         (Req     : in out Swagger.Servers.Request'Class;
          Reply   : in out Swagger.Servers.Response'Class;
          Stream  : in out Swagger.Servers.Output_Stream'Class;
          Context : in out Swagger.Servers.Context_Type) is
         Impl : Implementation_Type;
         Product : .Models.AnyType_Type;
         Cycle : .Models.AnyType_Type;
         Result : .Models.Cycle_Type;
      begin
         
         
         Product := To_.Models.AnyType_Type (Swagger.Servers.Get_Path_Parameter (Req, 1));

         Cycle := To_.Models.AnyType_Type (Swagger.Servers.Get_Path_Parameter (Req, 2));

         Impl.Get_Api_Product_Cycle_Json
            (Product,
             Cycle, Result, Context);
         if Context.Get_Status = 200 then
            Context.Set_Description ("OK");


            Stream.Start_Document;
            .Models.Serialize (Stream, "", Result);
            Stream.End_Document;

            return;
         end if;
      end Get_Api_Product_Cycle_Json;

      package API_Get_Api_Product_Json is
         new Swagger.Servers.Operation
            (Handler => Get_Api_Product_Json,
             Method  => Swagger.Servers.GET,
             URI     => URI_Prefix & "/api/{product}.json",
             Mimes   => Media_List_1'Access);

      --  Get All Details
      procedure Get_Api_Product_Json
         (Req     : in out Swagger.Servers.Request'Class;
          Reply   : in out Swagger.Servers.Response'Class;
          Stream  : in out Swagger.Servers.Output_Stream'Class;
          Context : in out Swagger.Servers.Context_Type) is
         Impl : Implementation_Type;
         Product : .Models.AnyType_Type;
         Result : .Models.AnyType_Type;
      begin
         
         
         Product := To_.Models.AnyType_Type (Swagger.Servers.Get_Path_Parameter (Req, 1));

         Impl.Get_Api_Product_Json
            (Product, Result, Context);
         if Context.Get_Status = 200 then
            Context.Set_Description ("OK");


            Stream.Start_Document;
            .Models.Serialize (Stream, "", Result);
            Stream.End_Document;

            return;
         end if;
      end Get_Api_Product_Json;

      procedure Register (Server : in out Swagger.Servers.Application_Type'Class) is
      begin
         Swagger.Servers.Register (Server, API_Get_Api_All_Json.Definition);
         Swagger.Servers.Register (Server, API_Get_Api_Product_Cycle_Json.Definition);
         Swagger.Servers.Register (Server, API_Get_Api_Product_Json.Definition);
      end Register;

   end Skeleton;

   package body Shared_Instance is


      --  All Products
      procedure Get_Api_All_Json
         (Req     : in out Swagger.Servers.Request'Class;
          Reply   : in out Swagger.Servers.Response'Class;
          Stream  : in out Swagger.Servers.Output_Stream'Class;
          Context : in out Swagger.Servers.Context_Type) is
         Result : .Models.AnyType_Type;
      begin

         
         Server.Get_Api_All_Json (Result, Context);
         if Context.Get_Status = 200 then
            Context.Set_Description ("OK");


            Stream.Start_Document;
            .Models.Serialize (Stream, "", Result);
            Stream.End_Document;

            return;
         end if;
      end Get_Api_All_Json;

      package API_Get_Api_All_Json is
         new Swagger.Servers.Operation
            (Handler => Get_Api_All_Json,
             Method  => Swagger.Servers.GET,
             URI     => URI_Prefix & "/api/all.json",
             Mimes   => Media_List_1'Access);


      --  Single cycle details
      procedure Get_Api_Product_Cycle_Json
         (Req     : in out Swagger.Servers.Request'Class;
          Reply   : in out Swagger.Servers.Response'Class;
          Stream  : in out Swagger.Servers.Output_Stream'Class;
          Context : in out Swagger.Servers.Context_Type) is
         Product : .Models.AnyType_Type;
         Cycle : .Models.AnyType_Type;
         Result : .Models.Cycle_Type;
      begin

         
         Product := To_.Models.AnyType_Type (Swagger.Servers.Get_Path_Parameter (Req, 1));

         Cycle := To_.Models.AnyType_Type (Swagger.Servers.Get_Path_Parameter (Req, 2));

         Server.Get_Api_Product_Cycle_Json
            (Product,
             Cycle, Result, Context);
         if Context.Get_Status = 200 then
            Context.Set_Description ("OK");


            Stream.Start_Document;
            .Models.Serialize (Stream, "", Result);
            Stream.End_Document;

            return;
         end if;
      end Get_Api_Product_Cycle_Json;

      package API_Get_Api_Product_Cycle_Json is
         new Swagger.Servers.Operation
            (Handler => Get_Api_Product_Cycle_Json,
             Method  => Swagger.Servers.GET,
             URI     => URI_Prefix & "/api/{product}/{cycle}.json",
             Mimes   => Media_List_1'Access);


      --  Get All Details
      procedure Get_Api_Product_Json
         (Req     : in out Swagger.Servers.Request'Class;
          Reply   : in out Swagger.Servers.Response'Class;
          Stream  : in out Swagger.Servers.Output_Stream'Class;
          Context : in out Swagger.Servers.Context_Type) is
         Product : .Models.AnyType_Type;
         Result : .Models.AnyType_Type;
      begin

         
         Product := To_.Models.AnyType_Type (Swagger.Servers.Get_Path_Parameter (Req, 1));

         Server.Get_Api_Product_Json
            (Product, Result, Context);
         if Context.Get_Status = 200 then
            Context.Set_Description ("OK");


            Stream.Start_Document;
            .Models.Serialize (Stream, "", Result);
            Stream.End_Document;

            return;
         end if;
      end Get_Api_Product_Json;

      package API_Get_Api_Product_Json is
         new Swagger.Servers.Operation
            (Handler => Get_Api_Product_Json,
             Method  => Swagger.Servers.GET,
             URI     => URI_Prefix & "/api/{product}.json",
             Mimes   => Media_List_1'Access);


      procedure Register (Server : in out Swagger.Servers.Application_Type'Class) is
      begin
         Swagger.Servers.Register (Server, API_Get_Api_All_Json.Definition);
         Swagger.Servers.Register (Server, API_Get_Api_Product_Cycle_Json.Definition);
         Swagger.Servers.Register (Server, API_Get_Api_Product_Json.Definition);
      end Register;

      protected body Server is
         --  All Products
         procedure Get_Api_All_Json (Result : out .Models.AnyType_Type;
         Context : in out Swagger.Servers.Context_Type) is
         begin
            Impl.Get_Api_All_Json (Result, Context);
         end Get_Api_All_Json;

         --  Single cycle details
         procedure Get_Api_Product_Cycle_Json
            (Product : in .Models.AnyType_Type;
             Cycle : in .Models.AnyType_Type;
             Result : out .Models.Cycle_Type;
             Context : in out Swagger.Servers.Context_Type) is
         begin
            Impl.Get_Api_Product_Cycle_Json
               (Product,
                Cycle,
                Result,
                Context);
         end Get_Api_Product_Cycle_Json;

         --  Get All Details
         procedure Get_Api_Product_Json
            (Product : in .Models.AnyType_Type;
             Result : out .Models.AnyType_Type;
             Context : in out Swagger.Servers.Context_Type) is
         begin
            Impl.Get_Api_Product_Json
               (Product,
                Result,
                Context);
         end Get_Api_Product_Json;

      end Server;

   end Shared_Instance;

end .Skeletons;
