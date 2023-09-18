--  endoflife.date
--  Documentation for the endoflife.date API. The API is currently in Alpha. Additional information about the API can be found on the [endoflife.date wiki](https://github.com/endoflife_date/endoflife.date/wiki)
--
--  The version of the OpenAPI document: 0.0.1
--  Contact: blah@cliffano.com
--
--  NOTE: This package is auto generated by OpenAPI-Generator 7.0.0.
--  https://openapi-generator.tech
--  Do not edit the class manually.

package body .Models is
   pragma Style_Checks ("-bmrIu");

   pragma Warnings (Off, "*use clause for package*");

   use Swagger.Streams;

   procedure Serialize (Into  : in out Swagger.Streams.Output_Stream'Class;
                        Name  : in String;
                        Value : in .Models.Cycle_Type) is
   begin
      Into.Start_Entity (Name);
      Serialize (Into, "cycle", Value.Cycle);
      Serialize (Into, "releaseDate", Value.Release_Date);
      Serialize (Into, "eol", Value.Eol);
      Serialize (Into, "latest", Value.Latest);
      Serialize (Into, "link", Value.Link);
      Serialize (Into, "lts", Value.Lts);
      Serialize (Into, "support", Value.Support);
      Serialize (Into, "discontinued", Value.Discontinued);
      Into.End_Entity (Name);
   end Serialize;

   procedure Serialize (Into  : in out Swagger.Streams.Output_Stream'Class;
                        Name  : in String;
                        Value : in Cycle_Type_Vectors.Vector) is
   begin
      Into.Start_Array (Name);
      for Item of Value loop
         Serialize (Into, "", Item);
      end loop;
      Into.End_Array (Name);
   end Serialize;

   procedure Deserialize (From  : in Swagger.Value_Type;
                          Name  : in String;
                          Value : out .Models.Cycle_Type) is
      Object : Swagger.Value_Type;
   begin
      Swagger.Streams.Deserialize (From, Name, Object);
      Deserialize (Object, "cycle", Value.Cycle);
      Deserialize (Object, "releaseDate", Value.Release_Date);
      Deserialize (Object, "eol", Value.Eol);
      Deserialize (Object, "latest", Value.Latest);
      Deserialize (Object, "link", Value.Link);
      Deserialize (Object, "lts", Value.Lts);
      Deserialize (Object, "support", Value.Support);
      Deserialize (Object, "discontinued", Value.Discontinued);
   end Deserialize;

   procedure Deserialize (From  : in Swagger.Value_Type;
                          Name  : in String;
                          Value : in out Cycle_Type_Vectors.Vector) is
      List : Swagger.Value_Array_Type;
      Item : .Models.Cycle_Type;
   begin
      Value.Clear;
      Swagger.Streams.Deserialize (From, Name, List);
      for Data of List loop
         Deserialize (Data, "", Item);
         Value.Append (Item);
      end loop;
   end Deserialize;


end .Models;