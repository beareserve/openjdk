package org.omg.IOP;


/**
* org/omg/IOP/TAG_MULTIPLE_COMPONENTS.java .
* 由IDL-to-Java 编译器 (可移植), 版本 "3.2"生成
* 从d:/xysziv/openjdk/corba/src/share/classes/org/omg/PortableInterceptor/IOP.idl
* 2021年6月2日 星期三 下午10时51分19秒 CST
*/

public interface TAG_MULTIPLE_COMPONENTS
{

  /** 
     * Indicates that the value encapsulated is of type 
     * <code>MultipleComponentProfile</code>. In this case, the profile 
     * consists of a list of protocol components, the use of which must 
     * be specified by the protocol using this profile. This profile may 
     * be used to carry IOR components.  
     * <p>
     * The <code>profile_data</code> for the 
     * <code>TAG_MULTIPLE_COMPONENTS</code> profile is a CDR encapsulation 
     * of the <code>MultipleComponentProfile</code> type shown above.
     */
  public static final int value = (int)(1L);
}
