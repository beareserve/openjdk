package org.omg.CORBA;

/**
* org/omg/CORBA/ParameterModeHolder.java .
* 由IDL-to-Java 编译器 (可移植), 版本 "3.2"生成
* 从d:/xysziv/openjdk/corba/src/share/classes/org/omg/PortableInterceptor/CORBAX.idl
* 2021年6月2日 星期三 下午10时51分19秒 CST
*/


/**
   * Enumeration of parameter modes for Parameter.  Possible vaues:
   * <ul>
   *   <li>PARAM_IN - Represents an "in" parameter.</li>
   *   <li>PARAM_OUT - Represents an "out" parameter.</li>
   *   <li>PARAM_INOUT - Represents an "inout" parameter.</li>
   * </ul>
   */
public final class ParameterModeHolder implements org.omg.CORBA.portable.Streamable
{
  public org.omg.CORBA.ParameterMode value = null;

  public ParameterModeHolder ()
  {
  }

  public ParameterModeHolder (org.omg.CORBA.ParameterMode initialValue)
  {
    value = initialValue;
  }

  public void _read (org.omg.CORBA.portable.InputStream i)
  {
    value = org.omg.CORBA.ParameterModeHelper.read (i);
  }

  public void _write (org.omg.CORBA.portable.OutputStream o)
  {
    org.omg.CORBA.ParameterModeHelper.write (o, value);
  }

  public org.omg.CORBA.TypeCode _type ()
  {
    return org.omg.CORBA.ParameterModeHelper.type ();
  }

}
