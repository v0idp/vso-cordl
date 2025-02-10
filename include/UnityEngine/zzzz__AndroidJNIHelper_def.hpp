#pragma once
// IWYU pragma private; include "UnityEngine/AndroidJNIHelper.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(AndroidJNIHelper)
namespace System {
class Array;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace System {
template<typename T>
struct Span_1;
}
namespace UnityEngine {
class AndroidJavaProxy;
}
namespace UnityEngine {
class AndroidJavaRunnable;
}
namespace UnityEngine {
struct jvalue;
}
// Forward declare root types
namespace UnityEngine {
class AndroidJNIHelper;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::AndroidJNIHelper);
// Dependencies System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.AndroidJNIHelper
class CORDL_TYPE AndroidJNIHelper : public ::System::Object {
public:
// Declarations
/// @brief Method Box, addr 0x2f42a2c, size 0x100, virtual false, abstract: false, final false
static inline ::System::IntPtr Box(::UnityEngine::jvalue  val, ::StringW  boxedClass, ::StringW  signature) ;

/// @brief Method Box, addr 0x2f42fd4, size 0x68, virtual false, abstract: false, final false
static inline ::System::IntPtr Box(bool  value) ;

/// @brief Method Box, addr 0x2f42f6c, size 0x68, virtual false, abstract: false, final false
static inline ::System::IntPtr Box(char16_t  value) ;

/// @brief Method Box, addr 0x2f42f04, size 0x68, virtual false, abstract: false, final false
static inline ::System::IntPtr Box(double_t  value) ;

/// @brief Method Box, addr 0x2f42e9c, size 0x68, virtual false, abstract: false, final false
static inline ::System::IntPtr Box(float_t  value) ;

/// @brief Method Box, addr 0x2f42d64, size 0x68, virtual false, abstract: false, final false
static inline ::System::IntPtr Box(int16_t  value) ;

/// @brief Method Box, addr 0x2f42dcc, size 0x68, virtual false, abstract: false, final false
static inline ::System::IntPtr Box(int32_t  value) ;

/// @brief Method Box, addr 0x2f42e34, size 0x68, virtual false, abstract: false, final false
static inline ::System::IntPtr Box(int64_t  value) ;

/// @brief Method Box, addr 0x2f42cfc, size 0x68, virtual false, abstract: false, final false
static inline ::System::IntPtr Box(int8_t  value) ;

/// @brief Method ConvertFromJNIArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename ArrayType>
static inline ArrayType ConvertFromJNIArray(::System::IntPtr  array) ;

/// @brief Method ConvertToJNIArray, addr 0x2f404c0, size 0x4, virtual false, abstract: false, final false
static inline ::System::IntPtr ConvertToJNIArray(::System::Array*  array) ;

/// @brief Method CreateJNIArgArray, addr 0x2f41094, size 0x90, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::jvalue,::Array<::UnityEngine::jvalue>*> CreateJNIArgArray(::ArrayW<::System::Object*,::Array<::System::Object*>*>  args) ;

/// @brief Method CreateJNIArgArray, addr 0x2f416a4, size 0x110, virtual false, abstract: false, final false
static inline void CreateJNIArgArray(::ArrayW<::System::Object*,::Array<::System::Object*>*>  args, ::System::Span_1<::UnityEngine::jvalue>  jniArgs) ;

/// @brief Method CreateJavaProxy, addr 0x2f4031c, size 0xf4, virtual false, abstract: false, final false
static inline ::System::IntPtr CreateJavaProxy(::UnityEngine::AndroidJavaProxy*  proxy) ;

/// @brief Method CreateJavaRunnable, addr 0x2f402c0, size 0x4, virtual false, abstract: false, final false
static inline ::System::IntPtr CreateJavaRunnable(::UnityEngine::AndroidJavaRunnable*  jrunnable) ;

/// @brief Method DeleteJNIArgArray, addr 0x2f417b4, size 0x6c, virtual false, abstract: false, final false
static inline void DeleteJNIArgArray(::ArrayW<::System::Object*,::Array<::System::Object*>*>  args, ::ArrayW<::UnityEngine::jvalue,::Array<::UnityEngine::jvalue>*>  jniArgs) ;

/// @brief Method DeleteJNIArgArray, addr 0x2f41978, size 0x4, virtual false, abstract: false, final false
static inline void DeleteJNIArgArray(::ArrayW<::System::Object*,::Array<::System::Object*>*>  args, ::System::Span_1<::UnityEngine::jvalue>  jniArgs) ;

/// @brief Method GetConstructorID, addr 0x2f3fb24, size 0x48, virtual false, abstract: false, final false
static inline ::System::IntPtr GetConstructorID(::System::IntPtr  javaClass) ;

/// @brief Method GetConstructorID, addr 0x2f3fb6c, size 0x4, virtual false, abstract: false, final false
static inline ::System::IntPtr GetConstructorID(::System::IntPtr  javaClass, ::StringW  signature) ;

/// @brief Method GetConstructorID, addr 0x2f4197c, size 0x20, virtual false, abstract: false, final false
static inline ::System::IntPtr GetConstructorID(::System::IntPtr  jclass, ::ArrayW<::System::Object*,::Array<::System::Object*>*>  args) ;

/// @brief Method GetFieldID, addr 0x2f3ff7c, size 0x5c, virtual false, abstract: false, final false
static inline ::System::IntPtr GetFieldID(::System::IntPtr  javaClass, ::StringW  fieldName) ;

/// @brief Method GetFieldID, addr 0x2f3ffe0, size 0x8, virtual false, abstract: false, final false
static inline ::System::IntPtr GetFieldID(::System::IntPtr  javaClass, ::StringW  fieldName, ::StringW  signature) ;

/// @brief Method GetFieldID, addr 0x2f3ffd8, size 0x8, virtual false, abstract: false, final false
static inline ::System::IntPtr GetFieldID(::System::IntPtr  javaClass, ::StringW  fieldName, ::StringW  signature, bool  isStatic) ;

/// @brief Method GetFieldID, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename FieldType>
static inline ::System::IntPtr GetFieldID(::System::IntPtr  jclass, ::StringW  fieldName, bool  isStatic) ;

/// @brief Method GetMethodID, addr 0x2f3fd38, size 0x5c, virtual false, abstract: false, final false
static inline ::System::IntPtr GetMethodID(::System::IntPtr  javaClass, ::StringW  methodName) ;

/// @brief Method GetMethodID, addr 0x2f3fd9c, size 0x8, virtual false, abstract: false, final false
static inline ::System::IntPtr GetMethodID(::System::IntPtr  javaClass, ::StringW  methodName, ::StringW  signature) ;

/// @brief Method GetMethodID, addr 0x2f3fd94, size 0x8, virtual false, abstract: false, final false
static inline ::System::IntPtr GetMethodID(::System::IntPtr  javaClass, ::StringW  methodName, ::StringW  signature, bool  isStatic) ;

/// @brief Method GetMethodID, addr 0x2f419bc, size 0x38, virtual false, abstract: false, final false
static inline ::System::IntPtr GetMethodID(::System::IntPtr  jclass, ::StringW  methodName, ::ArrayW<::System::Object*,::Array<::System::Object*>*>  args, bool  isStatic) ;

/// @brief Method GetMethodID, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename ReturnType>
static inline ::System::IntPtr GetMethodID(::System::IntPtr  jclass, ::StringW  methodName, ::ArrayW<::System::Object*,::Array<::System::Object*>*>  args, bool  isStatic) ;

/// @brief Method GetSignature, addr 0x2f42904, size 0x4, virtual false, abstract: false, final false
static inline ::StringW GetSignature(::ArrayW<::System::Object*,::Array<::System::Object*>*>  args) ;

/// @brief Method GetSignature, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename ReturnType>
static inline ::StringW GetSignature(::ArrayW<::System::Object*,::Array<::System::Object*>*>  args) ;

/// @brief Method GetSignature, addr 0x2f41a2c, size 0x4, virtual false, abstract: false, final false
static inline ::StringW GetSignature(::System::Object*  obj) ;

/// @brief Method GetUnboxMethod, addr 0x2f4303c, size 0x9c, virtual false, abstract: false, final false
static inline ::System::IntPtr GetUnboxMethod(::System::IntPtr  obj, ::StringW  methodName, ::StringW  signature) ;

/// @brief Method Unbox, addr 0x2f43948, size 0x8c, virtual false, abstract: false, final false
static inline void Unbox(::System::IntPtr  obj, ::ByRef<bool>  value) ;

/// @brief Method Unbox, addr 0x2f43848, size 0x88, virtual false, abstract: false, final false
static inline void Unbox(::System::IntPtr  obj, ::ByRef<char16_t>  value) ;

/// @brief Method Unbox, addr 0x2f4373c, size 0x88, virtual false, abstract: false, final false
static inline void Unbox(::System::IntPtr  obj, ::ByRef<double_t>  value) ;

/// @brief Method Unbox, addr 0x2f43630, size 0x88, virtual false, abstract: false, final false
static inline void Unbox(::System::IntPtr  obj, ::ByRef<float_t>  value) ;

/// @brief Method Unbox, addr 0x2f43330, size 0x88, virtual false, abstract: false, final false
static inline void Unbox(::System::IntPtr  obj, ::ByRef<int16_t>  value) ;

/// @brief Method Unbox, addr 0x2f43430, size 0x88, virtual false, abstract: false, final false
static inline void Unbox(::System::IntPtr  obj, ::ByRef<int32_t>  value) ;

/// @brief Method Unbox, addr 0x2f43530, size 0x88, virtual false, abstract: false, final false
static inline void Unbox(::System::IntPtr  obj, ::ByRef<int64_t>  value) ;

/// @brief Method Unbox, addr 0x2f43230, size 0x88, virtual false, abstract: false, final false
static inline void Unbox(::System::IntPtr  obj, ::ByRef<int8_t>  value) ;

/// @brief Method get_debug, addr 0x2f3fac0, size 0x28, virtual false, abstract: false, final false
static inline bool get_debug() ;

/// @brief Method set_debug, addr 0x2f3fae8, size 0x3c, virtual false, abstract: false, final false
static inline void set_debug(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AndroidJNIHelper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AndroidJNIHelper", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AndroidJNIHelper(AndroidJNIHelper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AndroidJNIHelper", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AndroidJNIHelper(AndroidJNIHelper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11328};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::AndroidJNIHelper, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine
NEED_NO_BOX(::UnityEngine::AndroidJNIHelper);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AndroidJNIHelper*, "UnityEngine", "AndroidJNIHelper");
