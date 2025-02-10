#pragma once
// IWYU pragma private; include "System/Reflection/TypeDelegator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Reflection/zzzz__TypeInfo_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TypeDelegator)
namespace System::Globalization {
class CultureInfo;
}
namespace System::Reflection {
class Assembly;
}
namespace System::Reflection {
class Binder;
}
namespace System::Reflection {
struct BindingFlags;
}
namespace System::Reflection {
struct CallingConventions;
}
namespace System::Reflection {
class ConstructorInfo;
}
namespace System::Reflection {
class EventInfo;
}
namespace System::Reflection {
class FieldInfo;
}
namespace System::Reflection {
class MemberInfo;
}
namespace System::Reflection {
struct MemberTypes;
}
namespace System::Reflection {
class MethodInfo;
}
namespace System::Reflection {
class Module;
}
namespace System::Reflection {
struct ParameterModifier;
}
namespace System::Reflection {
class PropertyInfo;
}
namespace System::Reflection {
struct TypeAttributes;
}
namespace System {
class Object;
}
namespace System {
struct RuntimeTypeHandle;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Reflection {
class TypeDelegator;
}
// Write type traits
MARK_REF_PTR_T(::System::Reflection::TypeDelegator);
// Dependencies System.Reflection.TypeInfo
namespace System::Reflection {
// Is value type: false
// CS Name: System.Reflection.TypeDelegator
class CORDL_TYPE TypeDelegator : public ::System::Reflection::TypeInfo {
public:
// Declarations
 __declspec(property(get=get_Assembly)) ::System::Reflection::Assembly*  Assembly;

 __declspec(property(get=get_AssemblyQualifiedName)) ::StringW  AssemblyQualifiedName;

 __declspec(property(get=get_BaseType)) ::System::Type*  BaseType;

 __declspec(property(get=get_FullName)) ::StringW  FullName;

 __declspec(property(get=get_IsCollectible)) bool  IsCollectible;

 __declspec(property(get=get_IsConstructedGenericType)) bool  IsConstructedGenericType;

 __declspec(property(get=get_IsGenericMethodParameter)) bool  IsGenericMethodParameter;

 __declspec(property(get=get_IsSZArray)) bool  IsSZArray;

 __declspec(property(get=get_MetadataToken)) int32_t  MetadataToken;

 __declspec(property(get=get_Module)) ::System::Reflection::Module*  Module;

 __declspec(property(get=get_Name)) ::StringW  Name;

 __declspec(property(get=get_Namespace)) ::StringW  Namespace;

 __declspec(property(get=get_TypeHandle)) ::System::RuntimeTypeHandle  TypeHandle;

 __declspec(property(get=get_UnderlyingSystemType)) ::System::Type*  UnderlyingSystemType;

/// @brief Field typeImpl, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_typeImpl, put=__cordl_internal_set_typeImpl)) ::System::Type*  typeImpl;

/// @brief Method GetAttributeFlagsImpl, addr 0x268ff98, size 0x1c, virtual true, abstract: false, final false
inline ::System::Reflection::TypeAttributes GetAttributeFlagsImpl() ;

/// @brief Method GetConstructorImpl, addr 0x268fcf4, size 0x1c, virtual true, abstract: false, final false
inline ::System::Reflection::ConstructorInfo* GetConstructorImpl(::System::Reflection::BindingFlags  bindingAttr, ::System::Reflection::Binder*  binder, ::System::Reflection::CallingConventions  callConvention, ::ArrayW<::System::Type*,::Array<::System::Type*>*>  types, ::ArrayW<::System::Reflection::ParameterModifier,::Array<::System::Reflection::ParameterModifier>*>  modifiers) ;

/// @brief Method GetConstructors, addr 0x268fd10, size 0x24, virtual true, abstract: false, final false
inline ::ArrayW<::System::Reflection::ConstructorInfo*,::Array<::System::Reflection::ConstructorInfo*>*> GetConstructors(::System::Reflection::BindingFlags  bindingAttr) ;

/// @brief Method GetCustomAttributes, addr 0x2690178, size 0x28, virtual true, abstract: false, final false
inline ::ArrayW<::System::Object*,::Array<::System::Object*>*> GetCustomAttributes(::System::Type*  attributeType, bool  inherit) ;

/// @brief Method GetCustomAttributes, addr 0x2690150, size 0x28, virtual true, abstract: false, final false
inline ::ArrayW<::System::Object*,::Array<::System::Object*>*> GetCustomAttributes(bool  inherit) ;

/// @brief Method GetElementType, addr 0x26900ec, size 0x24, virtual true, abstract: false, final false
inline ::System::Type* GetElementType() ;

/// @brief Method GetEvent, addr 0x268fdf0, size 0x24, virtual true, abstract: false, final false
inline ::System::Reflection::EventInfo* GetEvent(::StringW  name, ::System::Reflection::BindingFlags  bindingAttr) ;

/// @brief Method GetField, addr 0x268fd84, size 0x24, virtual true, abstract: false, final false
inline ::System::Reflection::FieldInfo* GetField(::StringW  name, ::System::Reflection::BindingFlags  bindingAttr) ;

/// @brief Method GetFields, addr 0x268fda8, size 0x24, virtual true, abstract: false, final false
inline ::ArrayW<::System::Reflection::FieldInfo*,::Array<::System::Reflection::FieldInfo*>*> GetFields(::System::Reflection::BindingFlags  bindingAttr) ;

/// @brief Method GetInterfaces, addr 0x268fdcc, size 0x24, virtual true, abstract: false, final false
inline ::ArrayW<::System::Type*,::Array<::System::Type*>*> GetInterfaces() ;

/// @brief Method GetMember, addr 0x268ff50, size 0x24, virtual true, abstract: false, final false
inline ::ArrayW<::System::Reflection::MemberInfo*,::Array<::System::Reflection::MemberInfo*>*> GetMember(::StringW  name, ::System::Reflection::MemberTypes  type, ::System::Reflection::BindingFlags  bindingAttr) ;

/// @brief Method GetMembers, addr 0x268ff74, size 0x24, virtual true, abstract: false, final false
inline ::ArrayW<::System::Reflection::MemberInfo*,::Array<::System::Reflection::MemberInfo*>*> GetMembers(::System::Reflection::BindingFlags  bindingAttr) ;

/// @brief Method GetMethodImpl, addr 0x268fd34, size 0x2c, virtual true, abstract: false, final false
inline ::System::Reflection::MethodInfo* GetMethodImpl(::StringW  name, ::System::Reflection::BindingFlags  bindingAttr, ::System::Reflection::Binder*  binder, ::System::Reflection::CallingConventions  callConvention, ::ArrayW<::System::Type*,::Array<::System::Type*>*>  types, ::ArrayW<::System::Reflection::ParameterModifier,::Array<::System::Reflection::ParameterModifier>*>  modifiers) ;

/// @brief Method GetMethods, addr 0x268fd60, size 0x24, virtual true, abstract: false, final false
inline ::ArrayW<::System::Reflection::MethodInfo*,::Array<::System::Reflection::MethodInfo*>*> GetMethods(::System::Reflection::BindingFlags  bindingAttr) ;

/// @brief Method GetNestedType, addr 0x268ff2c, size 0x24, virtual true, abstract: false, final false
inline ::System::Type* GetNestedType(::StringW  name, ::System::Reflection::BindingFlags  bindingAttr) ;

/// @brief Method GetProperties, addr 0x268ff08, size 0x24, virtual true, abstract: false, final false
inline ::ArrayW<::System::Reflection::PropertyInfo*,::Array<::System::Reflection::PropertyInfo*>*> GetProperties(::System::Reflection::BindingFlags  bindingAttr) ;

/// @brief Method GetPropertyImpl, addr 0x268fe14, size 0xf4, virtual true, abstract: false, final false
inline ::System::Reflection::PropertyInfo* GetPropertyImpl(::StringW  name, ::System::Reflection::BindingFlags  bindingAttr, ::System::Reflection::Binder*  binder, ::System::Type*  returnType, ::ArrayW<::System::Type*,::Array<::System::Type*>*>  types, ::ArrayW<::System::Reflection::ParameterModifier,::Array<::System::Reflection::ParameterModifier>*>  modifiers) ;

/// @brief Method HasElementTypeImpl, addr 0x2690110, size 0x1c, virtual true, abstract: false, final false
inline bool HasElementTypeImpl() ;

/// @brief Method InvokeMember, addr 0x268fbac, size 0x2c, virtual true, abstract: false, final false
inline ::System::Object* InvokeMember(::StringW  name, ::System::Reflection::BindingFlags  invokeAttr, ::System::Reflection::Binder*  binder, ::System::Object*  target, ::ArrayW<::System::Object*,::Array<::System::Object*>*>  args, ::ArrayW<::System::Reflection::ParameterModifier,::Array<::System::Reflection::ParameterModifier>*>  modifiers, ::System::Globalization::CultureInfo*  culture, ::ArrayW<::StringW,::Array<::StringW>*>  namedParameters) ;

/// @brief Method IsArrayImpl, addr 0x268ffd8, size 0x1c, virtual true, abstract: false, final false
inline bool IsArrayImpl() ;

/// @brief Method IsByRefImpl, addr 0x2690010, size 0x1c, virtual true, abstract: false, final false
inline bool IsByRefImpl() ;

/// @brief Method IsCOMObjectImpl, addr 0x2690088, size 0x1c, virtual true, abstract: false, final false
inline bool IsCOMObjectImpl() ;

/// @brief Method IsDefined, addr 0x26901a0, size 0x24, virtual true, abstract: false, final false
inline bool IsDefined(::System::Type*  attributeType, bool  inherit) ;

/// @brief Method IsPointerImpl, addr 0x2690050, size 0x1c, virtual true, abstract: false, final false
inline bool IsPointerImpl() ;

/// @brief Method IsPrimitiveImpl, addr 0x268fff4, size 0x1c, virtual true, abstract: false, final false
inline bool IsPrimitiveImpl() ;

/// @brief Method IsValueTypeImpl, addr 0x269006c, size 0x1c, virtual true, abstract: false, final false
inline bool IsValueTypeImpl() ;

static inline ::System::Reflection::TypeDelegator* New_ctor(::System::Type*  delegatingType) ;

constexpr ::System::Type* const& __cordl_internal_get_typeImpl() const;

constexpr ::System::Type*& __cordl_internal_get_typeImpl() ;

constexpr void __cordl_internal_set_typeImpl(::System::Type*  value) ;

/// @brief Method .ctor, addr 0x268afb0, size 0xc4, virtual false, abstract: false, final false
inline void _ctor(::System::Type*  delegatingType) ;

/// @brief Method get_Assembly, addr 0x268fbfc, size 0x24, virtual true, abstract: false, final false
inline ::System::Reflection::Assembly* get_Assembly() ;

/// @brief Method get_AssemblyQualifiedName, addr 0x268fcac, size 0x24, virtual true, abstract: false, final false
inline ::StringW get_AssemblyQualifiedName() ;

/// @brief Method get_BaseType, addr 0x268fcd0, size 0x24, virtual true, abstract: false, final false
inline ::System::Type* get_BaseType() ;

/// @brief Method get_FullName, addr 0x268fc64, size 0x24, virtual true, abstract: false, final false
inline ::StringW get_FullName() ;

/// @brief Method get_IsCollectible, addr 0x26900c8, size 0x24, virtual true, abstract: false, final false
inline bool get_IsCollectible() ;

/// @brief Method get_IsConstructedGenericType, addr 0x26900a4, size 0x24, virtual true, abstract: false, final false
inline bool get_IsConstructedGenericType() ;

/// @brief Method get_IsGenericMethodParameter, addr 0x269002c, size 0x24, virtual true, abstract: false, final false
inline bool get_IsGenericMethodParameter() ;

/// @brief Method get_IsSZArray, addr 0x268ffb4, size 0x24, virtual true, abstract: false, final false
inline bool get_IsSZArray() ;

/// @brief Method get_MetadataToken, addr 0x268fb88, size 0x24, virtual true, abstract: false, final false
inline int32_t get_MetadataToken() ;

/// @brief Method get_Module, addr 0x268fbd8, size 0x24, virtual true, abstract: false, final false
inline ::System::Reflection::Module* get_Module() ;

/// @brief Method get_Name, addr 0x268fc44, size 0x20, virtual true, abstract: false, final false
inline ::StringW get_Name() ;

/// @brief Method get_Namespace, addr 0x268fc88, size 0x24, virtual true, abstract: false, final false
inline ::StringW get_Namespace() ;

/// @brief Method get_TypeHandle, addr 0x268fc20, size 0x24, virtual true, abstract: false, final false
inline ::System::RuntimeTypeHandle get_TypeHandle() ;

/// @brief Method get_UnderlyingSystemType, addr 0x269012c, size 0x24, virtual true, abstract: false, final false
inline ::System::Type* get_UnderlyingSystemType() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TypeDelegator() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TypeDelegator", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TypeDelegator(TypeDelegator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TypeDelegator", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TypeDelegator(TypeDelegator const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3157};

/// @brief Field typeImpl, offset: 0x18, size: 0x8, def value: None
 ::System::Type*  ___typeImpl;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Reflection::TypeDelegator, ___typeImpl) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Reflection::TypeDelegator, 0x20>, "Size mismatch!");

} // namespace end def System::Reflection
NEED_NO_BOX(::System::Reflection::TypeDelegator);
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::TypeDelegator*, "System.Reflection", "TypeDelegator");
