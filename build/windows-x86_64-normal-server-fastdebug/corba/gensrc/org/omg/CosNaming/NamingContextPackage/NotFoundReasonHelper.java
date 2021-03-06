package org.omg.CosNaming.NamingContextPackage;


/**
* org/omg/CosNaming/NamingContextPackage/NotFoundReasonHelper.java .
* 由IDL-to-Java 编译器 (可移植), 版本 "3.2"生成
* 从d:/xysziv/openjdk/corba/src/share/classes/org/omg/CosNaming/nameservice.idl
* 2021年6月2日 星期三 下午10时51分19秒 CST
*/


/**
         * Indicates the reason for not able to resolve.
         */
abstract public class NotFoundReasonHelper
{
  private static String  _id = "IDL:omg.org/CosNaming/NamingContext/NotFoundReason:1.0";

  public static void insert (org.omg.CORBA.Any a, org.omg.CosNaming.NamingContextPackage.NotFoundReason that)
  {
    org.omg.CORBA.portable.OutputStream out = a.create_output_stream ();
    a.type (type ());
    write (out, that);
    a.read_value (out.create_input_stream (), type ());
  }

  public static org.omg.CosNaming.NamingContextPackage.NotFoundReason extract (org.omg.CORBA.Any a)
  {
    return read (a.create_input_stream ());
  }

  private static org.omg.CORBA.TypeCode __typeCode = null;
  synchronized public static org.omg.CORBA.TypeCode type ()
  {
    if (__typeCode == null)
    {
      __typeCode = org.omg.CORBA.ORB.init ().create_enum_tc (org.omg.CosNaming.NamingContextPackage.NotFoundReasonHelper.id (), "NotFoundReason", new String[] { "missing_node", "not_context", "not_object"} );
    }
    return __typeCode;
  }

  public static String id ()
  {
    return _id;
  }

  public static org.omg.CosNaming.NamingContextPackage.NotFoundReason read (org.omg.CORBA.portable.InputStream istream)
  {
    return org.omg.CosNaming.NamingContextPackage.NotFoundReason.from_int (istream.read_long ());
  }

  public static void write (org.omg.CORBA.portable.OutputStream ostream, org.omg.CosNaming.NamingContextPackage.NotFoundReason value)
  {
    ostream.write_long (value.value ());
  }

}
