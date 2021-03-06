#define JDWP_VirtualMachine 1
#define JDWP_VirtualMachine_Version 1
#define JDWP_VirtualMachine_ClassesBySignature 2
#define JDWP_VirtualMachine_AllClasses 3
#define JDWP_VirtualMachine_AllThreads 4
#define JDWP_VirtualMachine_TopLevelThreadGroups 5
#define JDWP_VirtualMachine_Dispose 6
#define JDWP_VirtualMachine_IDSizes 7
#define JDWP_VirtualMachine_Suspend 8
#define JDWP_VirtualMachine_Resume 9
#define JDWP_VirtualMachine_Exit 10
#define JDWP_VirtualMachine_CreateString 11
#define JDWP_VirtualMachine_Capabilities 12
#define JDWP_VirtualMachine_ClassPaths 13
#define JDWP_VirtualMachine_DisposeObjects 14
#define JDWP_VirtualMachine_HoldEvents 15
#define JDWP_VirtualMachine_ReleaseEvents 16
#define JDWP_VirtualMachine_CapabilitiesNew 17
#define JDWP_VirtualMachine_RedefineClasses 18
#define JDWP_VirtualMachine_SetDefaultStratum 19
#define JDWP_VirtualMachine_AllClassesWithGeneric 20
#define JDWP_VirtualMachine_InstanceCounts 21
#define JDWP_ReferenceType 2
#define JDWP_ReferenceType_Signature 1
#define JDWP_ReferenceType_ClassLoader 2
#define JDWP_ReferenceType_Modifiers 3
#define JDWP_ReferenceType_Fields 4
#define JDWP_ReferenceType_Methods 5
#define JDWP_ReferenceType_GetValues 6
#define JDWP_ReferenceType_SourceFile 7
#define JDWP_ReferenceType_NestedTypes 8
#define JDWP_ReferenceType_Status 9
#define JDWP_ReferenceType_Interfaces 10
#define JDWP_ReferenceType_ClassObject 11
#define JDWP_ReferenceType_SourceDebugExtension 12
#define JDWP_ReferenceType_SignatureWithGeneric 13
#define JDWP_ReferenceType_FieldsWithGeneric 14
#define JDWP_ReferenceType_MethodsWithGeneric 15
#define JDWP_ReferenceType_Instances 16
#define JDWP_ReferenceType_ClassFileVersion 17
#define JDWP_ReferenceType_ConstantPool 18
#define JDWP_ClassType 3
#define JDWP_ClassType_Superclass 1
#define JDWP_ClassType_SetValues 2
#define JDWP_ClassType_InvokeMethod 3
#define JDWP_ClassType_NewInstance 4
#define JDWP_ArrayType 4
#define JDWP_ArrayType_NewInstance 1
#define JDWP_InterfaceType 5
#define JDWP_InterfaceType_InvokeMethod 1
#define JDWP_Method 6
#define JDWP_Method_LineTable 1
#define JDWP_Method_VariableTable 2
#define JDWP_Method_Bytecodes 3
#define JDWP_Method_IsObsolete 4
#define JDWP_Method_VariableTableWithGeneric 5
#define JDWP_Field 8
#define JDWP_ObjectReference 9
#define JDWP_ObjectReference_ReferenceType 1
#define JDWP_ObjectReference_GetValues 2
#define JDWP_ObjectReference_SetValues 3
#define JDWP_ObjectReference_MonitorInfo 5
#define JDWP_ObjectReference_InvokeMethod 6
#define JDWP_ObjectReference_DisableCollection 7
#define JDWP_ObjectReference_EnableCollection 8
#define JDWP_ObjectReference_IsCollected 9
#define JDWP_ObjectReference_ReferringObjects 10
#define JDWP_StringReference 10
#define JDWP_StringReference_Value 1
#define JDWP_ThreadReference 11
#define JDWP_ThreadReference_Name 1
#define JDWP_ThreadReference_Suspend 2
#define JDWP_ThreadReference_Resume 3
#define JDWP_ThreadReference_Status 4
#define JDWP_ThreadReference_ThreadGroup 5
#define JDWP_ThreadReference_Frames 6
#define JDWP_ThreadReference_FrameCount 7
#define JDWP_ThreadReference_OwnedMonitors 8
#define JDWP_ThreadReference_CurrentContendedMonitor 9
#define JDWP_ThreadReference_Stop 10
#define JDWP_ThreadReference_Interrupt 11
#define JDWP_ThreadReference_SuspendCount 12
#define JDWP_ThreadReference_OwnedMonitorsStackDepthInfo 13
#define JDWP_ThreadReference_ForceEarlyReturn 14
#define JDWP_ThreadGroupReference 12
#define JDWP_ThreadGroupReference_Name 1
#define JDWP_ThreadGroupReference_Parent 2
#define JDWP_ThreadGroupReference_Children 3
#define JDWP_ArrayReference 13
#define JDWP_ArrayReference_Length 1
#define JDWP_ArrayReference_GetValues 2
#define JDWP_ArrayReference_SetValues 3
#define JDWP_ClassLoaderReference 14
#define JDWP_ClassLoaderReference_VisibleClasses 1
#define JDWP_EventRequest 15
#define JDWP_EventRequest_Set 1
#define JDWP_EventRequest_Set_Out_modifiers_Modifier_Count 1
#define JDWP_EventRequest_Set_Out_modifiers_Modifier_Conditional 2
#define JDWP_EventRequest_Set_Out_modifiers_Modifier_ThreadOnly 3
#define JDWP_EventRequest_Set_Out_modifiers_Modifier_ClassOnly 4
#define JDWP_EventRequest_Set_Out_modifiers_Modifier_ClassMatch 5
#define JDWP_EventRequest_Set_Out_modifiers_Modifier_ClassExclude 6
#define JDWP_EventRequest_Set_Out_modifiers_Modifier_LocationOnly 7
#define JDWP_EventRequest_Set_Out_modifiers_Modifier_ExceptionOnly 8
#define JDWP_EventRequest_Set_Out_modifiers_Modifier_FieldOnly 9
#define JDWP_EventRequest_Set_Out_modifiers_Modifier_Step 10
#define JDWP_EventRequest_Set_Out_modifiers_Modifier_InstanceOnly 11
#define JDWP_EventRequest_Set_Out_modifiers_Modifier_SourceNameMatch 12
#define JDWP_EventRequest_Clear 2
#define JDWP_EventRequest_ClearAllBreakpoints 3
#define JDWP_StackFrame 16
#define JDWP_StackFrame_GetValues 1
#define JDWP_StackFrame_SetValues 2
#define JDWP_StackFrame_ThisObject 3
#define JDWP_StackFrame_PopFrames 4
#define JDWP_ClassObjectReference 17
#define JDWP_ClassObjectReference_ReflectedType 1
#define JDWP_Event 64
#define JDWP_Event_Composite 100
#define JDWP_Event_Composite_Event_events_Events_VMStart JDWP.EventKind.VM_START
#define JDWP_Event_Composite_Event_events_Events_SingleStep JDWP.EventKind.SINGLE_STEP
#define JDWP_Event_Composite_Event_events_Events_Breakpoint JDWP.EventKind.BREAKPOINT
#define JDWP_Event_Composite_Event_events_Events_MethodEntry JDWP.EventKind.METHOD_ENTRY
#define JDWP_Event_Composite_Event_events_Events_MethodExit JDWP.EventKind.METHOD_EXIT
#define JDWP_Event_Composite_Event_events_Events_MethodExitWithReturnValue JDWP.EventKind.METHOD_EXIT_WITH_RETURN_VALUE
#define JDWP_Event_Composite_Event_events_Events_MonitorContendedEnter JDWP.EventKind.MONITOR_CONTENDED_ENTER
#define JDWP_Event_Composite_Event_events_Events_MonitorContendedEntered JDWP.EventKind.MONITOR_CONTENDED_ENTERED
#define JDWP_Event_Composite_Event_events_Events_MonitorWait JDWP.EventKind.MONITOR_WAIT
#define JDWP_Event_Composite_Event_events_Events_MonitorWaited JDWP.EventKind.MONITOR_WAITED
#define JDWP_Event_Composite_Event_events_Events_Exception JDWP.EventKind.EXCEPTION
#define JDWP_Event_Composite_Event_events_Events_ThreadStart JDWP.EventKind.THREAD_START
#define JDWP_Event_Composite_Event_events_Events_ThreadDeath JDWP.EventKind.THREAD_DEATH
#define JDWP_Event_Composite_Event_events_Events_ClassPrepare JDWP.EventKind.CLASS_PREPARE
#define JDWP_Event_Composite_Event_events_Events_ClassUnload JDWP.EventKind.CLASS_UNLOAD
#define JDWP_Event_Composite_Event_events_Events_FieldAccess JDWP.EventKind.FIELD_ACCESS
#define JDWP_Event_Composite_Event_events_Events_FieldModification JDWP.EventKind.FIELD_MODIFICATION
#define JDWP_Event_Composite_Event_events_Events_VMDeath JDWP.EventKind.VM_DEATH
#define JDWP_Error_NONE 0
#define JDWP_Error_INVALID_THREAD 10
#define JDWP_Error_INVALID_THREAD_GROUP 11
#define JDWP_Error_INVALID_PRIORITY 12
#define JDWP_Error_THREAD_NOT_SUSPENDED 13
#define JDWP_Error_THREAD_SUSPENDED 14
#define JDWP_Error_THREAD_NOT_ALIVE 15
#define JDWP_Error_INVALID_OBJECT 20
#define JDWP_Error_INVALID_CLASS 21
#define JDWP_Error_CLASS_NOT_PREPARED 22
#define JDWP_Error_INVALID_METHODID 23
#define JDWP_Error_INVALID_LOCATION 24
#define JDWP_Error_INVALID_FIELDID 25
#define JDWP_Error_INVALID_FRAMEID 30
#define JDWP_Error_NO_MORE_FRAMES 31
#define JDWP_Error_OPAQUE_FRAME 32
#define JDWP_Error_NOT_CURRENT_FRAME 33
#define JDWP_Error_TYPE_MISMATCH 34
#define JDWP_Error_INVALID_SLOT 35
#define JDWP_Error_DUPLICATE 40
#define JDWP_Error_NOT_FOUND 41
#define JDWP_Error_INVALID_MONITOR 50
#define JDWP_Error_NOT_MONITOR_OWNER 51
#define JDWP_Error_INTERRUPT 52
#define JDWP_Error_INVALID_CLASS_FORMAT 60
#define JDWP_Error_CIRCULAR_CLASS_DEFINITION 61
#define JDWP_Error_FAILS_VERIFICATION 62
#define JDWP_Error_ADD_METHOD_NOT_IMPLEMENTED 63
#define JDWP_Error_SCHEMA_CHANGE_NOT_IMPLEMENTED 64
#define JDWP_Error_INVALID_TYPESTATE 65
#define JDWP_Error_HIERARCHY_CHANGE_NOT_IMPLEMENTED 66
#define JDWP_Error_DELETE_METHOD_NOT_IMPLEMENTED 67
#define JDWP_Error_UNSUPPORTED_VERSION 68
#define JDWP_Error_NAMES_DONT_MATCH 69
#define JDWP_Error_CLASS_MODIFIERS_CHANGE_NOT_IMPLEMENTED 70
#define JDWP_Error_METHOD_MODIFIERS_CHANGE_NOT_IMPLEMENTED 71
#define JDWP_Error_NOT_IMPLEMENTED 99
#define JDWP_Error_NULL_POINTER 100
#define JDWP_Error_ABSENT_INFORMATION 101
#define JDWP_Error_INVALID_EVENT_TYPE 102
#define JDWP_Error_ILLEGAL_ARGUMENT 103
#define JDWP_Error_OUT_OF_MEMORY 110
#define JDWP_Error_ACCESS_DENIED 111
#define JDWP_Error_VM_DEAD 112
#define JDWP_Error_INTERNAL 113
#define JDWP_Error_UNATTACHED_THREAD 115
#define JDWP_Error_INVALID_TAG 500
#define JDWP_Error_ALREADY_INVOKING 502
#define JDWP_Error_INVALID_INDEX 503
#define JDWP_Error_INVALID_LENGTH 504
#define JDWP_Error_INVALID_STRING 506
#define JDWP_Error_INVALID_CLASS_LOADER 507
#define JDWP_Error_INVALID_ARRAY 508
#define JDWP_Error_TRANSPORT_LOAD 509
#define JDWP_Error_TRANSPORT_INIT 510
#define JDWP_Error_NATIVE_METHOD 511
#define JDWP_Error_INVALID_COUNT 512
#define JDWP_EventKind_SINGLE_STEP 1
#define JDWP_EventKind_BREAKPOINT 2
#define JDWP_EventKind_FRAME_POP 3
#define JDWP_EventKind_EXCEPTION 4
#define JDWP_EventKind_USER_DEFINED 5
#define JDWP_EventKind_THREAD_START 6
#define JDWP_EventKind_THREAD_DEATH 7
#define JDWP_EventKind_THREAD_END 7
#define JDWP_EventKind_CLASS_PREPARE 8
#define JDWP_EventKind_CLASS_UNLOAD 9
#define JDWP_EventKind_CLASS_LOAD 10
#define JDWP_EventKind_FIELD_ACCESS 20
#define JDWP_EventKind_FIELD_MODIFICATION 21
#define JDWP_EventKind_EXCEPTION_CATCH 30
#define JDWP_EventKind_METHOD_ENTRY 40
#define JDWP_EventKind_METHOD_EXIT 41
#define JDWP_EventKind_METHOD_EXIT_WITH_RETURN_VALUE 42
#define JDWP_EventKind_MONITOR_CONTENDED_ENTER 43
#define JDWP_EventKind_MONITOR_CONTENDED_ENTERED 44
#define JDWP_EventKind_MONITOR_WAIT 45
#define JDWP_EventKind_MONITOR_WAITED 46
#define JDWP_EventKind_VM_START 90
#define JDWP_EventKind_VM_INIT 90
#define JDWP_EventKind_VM_DEATH 99
#define JDWP_EventKind_VM_DISCONNECTED 100
#define JDWP_ThreadStatus_ZOMBIE 0
#define JDWP_ThreadStatus_RUNNING 1
#define JDWP_ThreadStatus_SLEEPING 2
#define JDWP_ThreadStatus_MONITOR 3
#define JDWP_ThreadStatus_WAIT 4
#define JDWP_SuspendStatus_SUSPEND_STATUS_SUSPENDED 0x1
#define JDWP_ClassStatus_VERIFIED 1
#define JDWP_ClassStatus_PREPARED 2
#define JDWP_ClassStatus_INITIALIZED 4
#define JDWP_ClassStatus_ERROR 8
#define JDWP_TypeTag_CLASS 1
#define JDWP_TypeTag_INTERFACE 2
#define JDWP_TypeTag_ARRAY 3
#define JDWP_Tag_ARRAY 91
#define JDWP_Tag_BYTE 66
#define JDWP_Tag_CHAR 67
#define JDWP_Tag_OBJECT 76
#define JDWP_Tag_FLOAT 70
#define JDWP_Tag_DOUBLE 68
#define JDWP_Tag_INT 73
#define JDWP_Tag_LONG 74
#define JDWP_Tag_SHORT 83
#define JDWP_Tag_VOID 86
#define JDWP_Tag_BOOLEAN 90
#define JDWP_Tag_STRING 115
#define JDWP_Tag_THREAD 116
#define JDWP_Tag_THREAD_GROUP 103
#define JDWP_Tag_CLASS_LOADER 108
#define JDWP_Tag_CLASS_OBJECT 99
#define JDWP_StepDepth_INTO 0
#define JDWP_StepDepth_OVER 1
#define JDWP_StepDepth_OUT 2
#define JDWP_StepSize_MIN 0
#define JDWP_StepSize_LINE 1
#define JDWP_SuspendPolicy_NONE 0
#define JDWP_SuspendPolicy_EVENT_THREAD 1
#define JDWP_SuspendPolicy_ALL 2
#define JDWP_InvokeOptions_INVOKE_SINGLE_THREADED 0x01
#define JDWP_InvokeOptions_INVOKE_NONVIRTUAL 0x02
