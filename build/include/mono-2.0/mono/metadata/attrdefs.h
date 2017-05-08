/*
 * attredefs.h: This file contains the various definitions for constants
 * found on the metadata tables
 *
 * Author:
 *   Miguel de Icaza (miguel@ximian.com)
 *   Paolo Molaro (lupus@ximian.com)
 *
 * (C) 2001 Ximian, Inc.
 * (C) 2006 Novell, Inc.
 *
 * From the ECMA documentation
 */
 
#ifndef _MONO_METADATA_ATTRDEFS_H_
#define	_MONO_METADATA_ATTRDEFS_H_

/*
 * 23.1.1  Values for AssemblyHashAlgorithm 
 */
enum {
	MONO_ASSEMBLY_HASH_NONE,
	MONO_ASSEMBLY_HASH_MD5  = 0x8003,
	MONO_ASSEMBLY_HASH_SHA1 = 0x8004
};

/*
 * 23.1.2 AssemblyRefs
 */
enum {
	MONO_ASSEMBLYREF_FULL_PUBLIC_KEY = 0x0001,
	MONO_ASSEMBLYREF_RETARGETABLE    = 0x0100,
	MONO_ASSEMBLYREF_JIT_TRACKING    = 0x8000,
	MONO_ASSEMBLYREF_NO_JIT_OPT      = 0x4000
};

/*
 * 23.1.4 Flags for Event.EventAttributes
 */
enum {
	MONO_EVENT_SPECIALNAME   = 0x0200,
	MONO_EVENT_RTSPECIALNAME = 0x0400
};

/*
 * Field Attributes (23.1.5).
 */
enum {
	MONO_FIELD_ATTR_FIELD_ACCESS_MASK     = 0x0007,
	MONO_FIELD_ATTR_COMPILER_CONTROLLED   = 0x0000,
	MONO_FIELD_ATTR_PRIVATE               = 0x0001,
	MONO_FIELD_ATTR_FAM_AND_ASSEM         = 0x0002,
	MONO_FIELD_ATTR_ASSEMBLY              = 0x0003,
	MONO_FIELD_ATTR_FAMILY                = 0x0004,
	MONO_FIELD_ATTR_FAM_OR_ASSEM          = 0x0005,
	MONO_FIELD_ATTR_PUBLIC                = 0x0006,

	MONO_FIELD_ATTR_STATIC                = 0x0010,
	MONO_FIELD_ATTR_INIT_ONLY             = 0x0020,
	MONO_FIELD_ATTR_LITERAL               = 0x0040,
	MONO_FIELD_ATTR_NOT_SERIALIZED        = 0x0080,
	MONO_FIELD_ATTR_SPECIAL_NAME          = 0x0200,
	MONO_FIELD_ATTR_PINVOKE_IMPL          = 0x2000,

/* For runtime use only */
	MONO_FIELD_ATTR_RESERVED_MASK         = 0x9500,
	MONO_FIELD_ATTR_RT_SPECIAL_NAME       = 0x0400,
	MONO_FIELD_ATTR_HAS_MARSHAL           = 0x1000,
	MONO_FIELD_ATTR_HAS_DEFAULT           = 0x8000,
	MONO_FIELD_ATTR_HAS_RVA               = 0x0100
};

/*
 * 23.1.6 Flags for FileAttributes
 */
enum {
	MONO_FILE_HAS_METADATA      = 0,
	MONO_FILE_HAS_NO_METADATA   = 1
};

/*
 * 23.1.7 Flags for generic parameters
 */
enum {
	MONO_GEN_PARAM_VARIANCE_MASK    = 0x0003,
	MONO_GEN_PARAM_NON_VARIANT      = 0x0000,
	MONO_GEN_PARAM_VARIANT          = 0x0001,
	MONO_GEN_PARAM_COVARIANT        = 0x0002,
	MONO_GEN_PARAM_CONSTRAINT_MASK  = 0x001c,
	MONO_GEN_PARAM_CONSTRAINT_CLASS = 0x0004,
	MONO_GEN_PARAM_CONSTRAINT_VTYPE = 0x0008,
	MONO_GEN_PARAM_CONSTRAINT_DCTOR = 0x0010
};

/*
 * 23.1.8 Flags for ImplMap [PInvokeAttributes]
 */
enum {
	MONO_PINVOKE_NO_MANGLE           = 0x0001,
	MONO_PINVOKE_CHAR_SET_MASK       = 0x0006,
	MONO_PINVOKE_CHAR_SET_NOT_SPEC   = 0x0000,
	MONO_PINVOKE_CHAR_SET_ANSI       = 0x0002,
	MONO_PINVOKE_CHAR_SET_UNICODE    = 0x0004,
	MONO_PINVOKE_CHAR_SET_AUTO       = 0x0006,
	MONO_PINVOKE_BEST_FIT_ENABLED    = 0x0010,
	MONO_PINVOKE_BEST_FIT_DISABLED   = 0x0020,
	MONO_PINVOKE_BEST_FIT_MASK       = 0x0030,
	MONO_PINVOKE_SUPPORTS_LAST_ERROR = 0x0040,
	MONO_PINVOKE_CALL_CONV_MASK      = 0x0700,
	MONO_PINVOKE_CALL_CONV_WINAPI    = 0x0100,
	MONO_PINVOKE_CALL_CONV_CDECL     = 0x0200,
	MONO_PINVOKE_CALL_CONV_STDCALL   = 0x0300,
	MONO_PINVOKE_CALL_CONV_THISCALL  = 0x0400,
	MONO_PINVOKE_CALL_CONV_FASTCALL  = 0x0500,
	MONO_PINVOKE_THROW_ON_UNMAPPABLE_ENABLED    = 0x1000,
	MONO_PINVOKE_THROW_ON_UNMAPPABLE_DISABLED   = 0x2000,
	MONO_PINVOKE_THROW_ON_UNMAPPABLE_MASK       = 0x3000,
	MONO_PINVOKE_CALL_CONV_GENERIC     = 0x0010,
	MONO_PINVOKE_CALL_CONV_GENERICINST = 0x000a
};

/*
 * 23.1.9 Flags for ManifestResource
 */
enum {
	MONO_MANIFEST_RESOURCE_VISIBILITY_MASK    = 0x00000007,
	MONO_MANIFEST_RESOURCE_PUBLIC             = 0x00000001,
	MONO_MANIFEST_RESOURCE_PRIVATE            = 0x00000002
};

/*
 * Method Attributes (23.1.10)
 */
enum {
	MONO_METHOD_ATTR_ACCESS_MASK               = 0x0007,
	MONO_METHOD_ATTR_COMPILER_CONTROLLED       = 0x0000,
	MONO_METHOD_ATTR_PRIVATE                   = 0x0001,
	MONO_METHOD_ATTR_FAM_AND_ASSEM             = 0x0002,
	MONO_METHOD_ATTR_ASSEM                     = 0x0003,
	MONO_METHOD_ATTR_FAMILY                    = 0x0004,
	MONO_METHOD_ATTR_FAM_OR_ASSEM              = 0x0005,
	MONO_METHOD_ATTR_PUBLIC                    = 0x0006,

	MONO_METHOD_ATTR_STATIC                    = 0x0010,
	MONO_METHOD_ATTR_FINAL                     = 0x0020,
	MONO_METHOD_ATTR_VIRTUAL                   = 0x0040,
	MONO_METHOD_ATTR_HIDE_BY_SIG               = 0x0080,

	MONO_METHOD_ATTR_VTABLE_LAYOUT_MASK        = 0x0100,
	MONO_METHOD_ATTR_REUSE_SLOT                = 0x0000,
	MONO_METHOD_ATTR_NEW_SLOT                  = 0x0100,
	MONO_METHOD_ATTR_STRICT                    = 0x0200,
	MONO_METHOD_ATTR_ABSTRACT                  = 0x0400,

	MONO_METHOD_ATTR_SPECIAL_NAME              = 0x0800,

	MONO_METHOD_ATTR_PINVOKE_IMPL              = 0x2000,
	MONO_METHOD_ATTR_UNMANAGED_EXPORT          = 0x0008,

/*
 * For runtime use only
 */
	MONO_METHOD_ATTR_RESERVED_MASK             = 0xd000,
	MONO_METHOD_ATTR_RT_SPECIAL_NAME           = 0x1000,
	MONO_METHOD_ATTR_HAS_SECURITY              = 0x4000,
	MONO_METHOD_ATTR_REQUIRE_SEC_OBJECT        = 0x8000
};

/*
 * Method Impl Attributes (23.1.11)
 */
enum {
	MONO_METHOD_IMPL_ATTR_CODE_TYPE_MASK       = 0x0003,
	MONO_METHOD_IMPL_ATTR_IL                   = 0x0000,
	MONO_METHOD_IMPL_ATTR_NATIVE               = 0x0001,
	MONO_METHOD_IMPL_ATTR_OPTIL                = 0x0002,
	MONO_METHOD_IMPL_ATTR_RUNTIME              = 0x0003,

	MONO_METHOD_IMPL_ATTR_MANAGED_MASK         = 0x0004,
	MONO_METHOD_IMPL_ATTR_UNMANAGED            = 0x0004,
	MONO_METHOD_IMPL_ATTR_MANAGED              = 0x0000,

	MONO_METHOD_IMPL_ATTR_FORWARD_REF          = 0x0010,
	MONO_METHOD_IMPL_ATTR_PRESERVE_SIG         = 0x0080,
	MONO_METHOD_IMPL_ATTR_INTERNAL_CALL        = 0x1000,
	MONO_METHOD_IMPL_ATTR_SYNCHRONIZED         = 0x0020,
	MONO_METHOD_IMPL_ATTR_NOINLINING           = 0x0008,
	MONO_METHOD_IMPL_ATTR_NOOPTIMIZATION       = 0x0040,	
	MONO_METHOD_IMPL_ATTR_MAX_METHOD_IMPL_VAL  = 0xffff
};

/*
 * Method Semantics ([MethodSemanticAttributes]) 23.1.12,
 */
enum {
	MONO_METHOD_SEMANTIC_SETTER    = 0x0001,
	MONO_METHOD_SEMANTIC_GETTER    = 0x0002,
	MONO_METHOD_SEMANTIC_OTHER     = 0x0004,
	MONO_METHOD_SEMANTIC_ADD_ON    = 0x0008,
	MONO_METHOD_SEMANTIC_REMOVE_ON = 0x0010,
	MONO_METHOD_SEMANTIC_FIRE      = 0x0020
};

/*
 * Flags for Params (23.1.13)
 */
enum {
	MONO_PARAM_ATTR_IN                 = 0x0001,
	MONO_PARAM_ATTR_OUT                = 0x0002,
	MONO_PARAM_ATTR_OPTIONAL           = 0x0010,
	MONO_PARAM_ATTR_RESERVED_MASK      = 0xf000,
	MONO_PARAM_ATTR_HAS_DEFAULT        = 0x1000,
	MONO_PARAM_ATTR_HAS_MARSHAL        = 0x2000,
	MONO_PARAM_ATTR_UNUSED             = 0xcfe0
};

/*
 * 23.1.14 PropertyAttributes
 */
enum {
	MONO_PROPERTY_ATTR_SPECIAL_NAME    = 0x0200,
	MONO_PROPERTY_ATTR_RESERVED_MASK   = 0xf400,
	MONO_PROPERTY_ATTR_RT_SPECIAL_NAME = 0x0400,
	MONO_PROPERTY_ATTR_HAS_DEFAULT     = 0x1000,
	MONO_PROPERTY_ATTR_UNUSED          = 0xe9ff
};

/*
 * Type Attributes (23.1.15).
 */
enum {
	MONO_TYPE_ATTR_VISIBILITY_MASK       = 0x00000007,
	MONO_TYPE_ATTR_NOT_PUBLIC            = 0x00000000,
	MONO_TYPE_ATTR_PUBLIC                = 0x00000001,
	MONO_TYPE_ATTR_NESTED_PUBLIC         = 0x00000002,
	MONO_TYPE_ATTR_NESTED_PRIVATE        = 0x00000003,
	MONO_TYPE_ATTR_NESTED_FAMILY         = 0x00000004,
	MONO_TYPE_ATTR_NESTED_ASSEMBLY       = 0x00000005,
	MONO_TYPE_ATTR_NESTED_FAM_AND_ASSEM  = 0x00000006,
	MONO_TYPE_ATTR_NESTED_FAM_OR_ASSEM   = 0x00000007,

	MONO_TYPE_ATTR_LAYOUT_MASK           = 0x00000018,
	MONO_TYPE_ATTR_AUTO_LAYOUT           = 0x00000000,
	MONO_TYPE_ATTR_SEQUENTIAL_LAYOUT     = 0x00000008,
	MONO_TYPE_ATTR_EXPLICIT_LAYOUT       = 0x00000010,

	MONO_TYPE_ATTR_CLASS_SEMANTIC_MASK   = 0x00000020,
	MONO_TYPE_ATTR_CLASS                 = 0x00000000,
	MONO_TYPE_ATTR_INTERFACE             = 0x00000020,

	MONO_TYPE_ATTR_ABSTRACT              = 0x00000080,
	MONO_TYPE_ATTR_SEALED                = 0x00000100,
	MONO_TYPE_ATTR_SPECIAL_NAME          = 0x00000400,

	MONO_TYPE_ATTR_IMPORT                = 0x00001000,
	MONO_TYPE_ATTR_SERIALIZABLE          = 0x00002000,

	MONO_TYPE_ATTR_STRING_FORMAT_MASK    = 0x00030000,
	MONO_TYPE_ATTR_ANSI_CLASS            = 0x00000000,
	MONO_TYPE_ATTR_UNICODE_CLASS         = 0x00010000,
	MONO_TYPE_ATTR_AUTO_CLASS            = 0x00020000,
	MONO_TYPE_ATTR_CUSTOM_CLASS          = 0x00030000,
	MONO_TYPE_ATTR_CUSTOM_MASK           = 0x00c00000,

	MONO_TYPE_ATTR_BEFORE_FIELD_INIT     = 0x00100000,
	MONO_TYPE_ATTR_FORWARDER             = 0x00200000,

	MONO_TYPE_ATTR_RESERVED_MASK         = 0x00040800,
	MONO_TYPE_ATTR_RT_SPECIAL_NAME       = 0x00000800,
	MONO_TYPE_ATTR_HAS_SECURITY          = 0x00040000
};

#endif
