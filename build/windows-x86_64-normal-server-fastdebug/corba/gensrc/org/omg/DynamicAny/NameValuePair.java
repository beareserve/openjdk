package org.omg.DynamicAny;


/**
* org/omg/DynamicAny/NameValuePair.java .
* 由IDL-to-Java 编译器 (可移植), 版本 "3.2"生成
* 从d:/xysziv/openjdk/corba/src/share/classes/org/omg/DynamicAny/DynamicAny.idl
* 2021年6月2日 星期三 下午10时51分19秒 CST
*/

public final class NameValuePair implements org.omg.CORBA.portable.IDLEntity
{

  /**
        * The name associated with the Any.
        */
  public String id = null;

  /**
        * The Any value associated with the name.
        */
  public org.omg.CORBA.Any value = null;

  public NameValuePair ()
  {
  } // ctor

  public NameValuePair (String _id, org.omg.CORBA.Any _value)
  {
    id = _id;
    value = _value;
  } // ctor

} // class NameValuePair
