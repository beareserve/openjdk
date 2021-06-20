package org.omg.PortableInterceptor;


/**
* org/omg/PortableInterceptor/ObjectReferenceTemplate.java .
* 由IDL-to-Java 编译器 (可移植), 版本 "3.2"生成
* 从d:/xysziv/openjdk/corba/src/share/classes/org/omg/PortableInterceptor/Interceptors.idl
* 2021年6月2日 星期三 下午10时51分20秒 CST
*/


/** The object reference template.  An instance of this must
   * exist for each object adapter created in an ORB.  The server_id,
   * orb_id, and adapter_name attributes uniquely identify this template
   * within the scope of an IMR.  Note that adapter_id is similarly unique
   * within the same scope, but it is opaque, and less useful in many
   * cases.
   */
public interface ObjectReferenceTemplate extends org.omg.PortableInterceptor.ObjectReferenceFactory
{
  public abstract String server_id ();

  public abstract String orb_id ();

  public abstract String[] adapter_name ();

} // interface ObjectReferenceTemplate
