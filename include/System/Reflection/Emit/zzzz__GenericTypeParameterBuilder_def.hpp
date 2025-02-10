#pragma once
// IWYU pragma private; include "System/Reflection/Emit/GenericTypeParameterBuilder.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Reflection/zzzz__TypeInfo_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(GenericTypeParameterBuilder)
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
class Type;
}
// Forward declare root types
namespace System::Reflection::Emit {
class GenericTypeParameterBuilder;
}
// Write type traits
MARK_REF_PTR_T(::System::Reflection::Emit::GenericTypeParameterBuilder);
// Dependencies System.Reflection.TypeInfo
namespace System::Reflection::Emit {
// Is value type: false
// CS Name: System.Reflection.Emit.GenericTypeParameterBuilder
class CORDL_TYPE GenericTypeParameterBuilder : public ::System::Reflection::TypeInfo {
public:
// Declarations
 __declspec(property(get=get_Assembly)) ::System::Reflection::Assembly*  Assembly;

 __declspec(property(get=get_AssemblyQualifiedName)) ::StringW  AssemblyQualifiedName;

 __declspec(property(get=get_BaseType)) ::System::Type*  BaseType;

 __declspec(property(get=get_FullName)) ::StringW  FullName;

 __declspec(property(get=get_Module)) ::System::Reflection::Module*  Module;

 __declspec(property(get=get_Name)) ::StringW  Name;

 __declspec(property(get=get_Namespace)) ::StringW  Namespace;

 __declspec(property(get=get_UnderlyingSystemType)) ::System::Type*  UnderlyingSystemType;

/// @brief Method GetAttributeFlagsImpl, addr 0x269dc58, size 0x38, virtual true, abstract: false, final false
inline ::System::Reflection::TypeAttributes GetAttributeFlagsImpl() ;

/// @brief Method GetConstructorImpl, addr 0x269dc90, size 0x38, virtual true, abstract: false, final false
inline ::System::Reflection::ConstructorInfo* GetConstructorImpl(::System::Reflection::BindingFlags  bindingAttr, ::System::Reflection::Binder*  binder, ::System::Reflection::CallingConventions  callConvention, ::ArrayW<::System::Type*,::Array<::System::Type*>*>  types, ::ArrayW<::System::Reflection::ParameterModifier,::Array<::System::Reflection::ParameterModifier>*>  modifiers) ;

/// @brief Method GetConstructors, addr 0x269dcc8, size 0x38, virtual true, abstract: false, final false
inline ::ArrayW<::System::Reflection::ConstructorInfo*,::Array<::System::Reflection::ConstructorInfo*>*> GetConstructors(::System::Reflection::BindingFlags  bindingAttr) ;

/// @brief Method GetCustomAttributes, addr 0x269dd38, size 0x38, virtual true, abstract: false, final false
inline ::ArrayW<::System::Object*,::Array<::System::Object*>*> GetCustomAttributes(::System::Type*  attributeType, bool  inherit) ;

/// @brief Method GetCustomAttributes, addr 0x269dd00, size 0x38, virtual true, abstract: false, final false
inline ::ArrayW<::System::Object*,::Array<::System::Object*>*> GetCustomAttributes(bool  inherit) ;

/// @brief Method GetElementType, addr 0x269dd70, size 0x38, virtual true, abstract: false, final false
inline ::System::Type* GetElementType() ;

/// @brief Method GetEvent, addr 0x269dda8, size 0x38, virtual true, abstract: false, final false
inline ::System::Reflection::EventInfo* GetEvent(::StringW  name, ::System::Reflection::BindingFlags  bindingAttr) ;

/// @brief Method GetField, addr 0x269dde0, size 0x38, virtual true, abstract: false, final false
inline ::System::Reflection::FieldInfo* GetField(::StringW  name, ::System::Reflection::BindingFlags  bindingAttr) ;

/// @brief Method GetFields, addr 0x269de18, size 0x38, virtual true, abstract: false, final false
inline ::ArrayW<::System::Reflection::FieldInfo*,::Array<::System::Reflection::FieldInfo*>*> GetFields(::System::Reflection::BindingFlags  bindingAttr) ;

/// @brief Method GetInterfaces, addr 0x269de50, size 0x38, virtual true, abstract: false, final false
inline ::ArrayW<::System::Type*,::Array<::System::Type*>*> GetInterfaces() ;

/// @brief Method GetMembers, addr 0x269de88, size 0x38, virtual true, abstract: false, final false
inline ::ArrayW<::System::Reflection::MemberInfo*,::Array<::System::Reflection::MemberInfo*>*> GetMembers(::System::Reflection::BindingFlags  bindingAttr) ;

/// @brief Method GetMethodImpl, addr 0x269dec0, size 0x38, virtual true, abstract: false, final false
inline ::System::Reflection::MethodInfo* GetMethodImpl(::StringW  name, ::System::Reflection::BindingFlags  bindingAttr, ::System::Reflection::Binder*  binder, ::System::Reflection::CallingConventions  callConvention, ::ArrayW<::System::Type*,::Array<::System::Type*>*>  types, ::ArrayW<::System::Reflection::ParameterModifier,::Array<::System::Reflection::ParameterModifier>*>  modifiers) ;

/// @brief Method GetMethods, addr 0x269def8, size 0x38, virtual true, abstract: false, final false
inline ::ArrayW<::System::Reflection::MethodInfo*,::Array<::System::Reflection::MethodInfo*>*> GetMethods(::System::Reflection::BindingFlags  bindingAttr) ;

/// @brief Method GetNestedType, addr 0x269df30, size 0x38, virtual true, abstract: false, final false
inline ::System::Type* GetNestedType(::StringW  name, ::System::Reflection::BindingFlags  bindingAttr) ;

/// @brief Method GetProperties, addr 0x269df68, size 0x38, virtual true, abstract: false, final false
inline ::ArrayW<::System::Reflection::PropertyInfo*,::Array<::System::Reflection::PropertyInfo*>*> GetProperties(::System::Reflection::BindingFlags  bindingAttr) ;

/// @brief Method GetPropertyImpl, addr 0x269dfa0, size 0x38, virtual true, abstract: false, final false
inline ::System::Reflection::PropertyInfo* GetPropertyImpl(::StringW  name, ::System::Reflection::BindingFlags  bindingAttr, ::System::Reflection::Binder*  binder, ::System::Type*  returnType, ::ArrayW<::System::Type*,::Array<::System::Type*>*>  types, ::ArrayW<::System::Reflection::ParameterModifier,::Array<::System::Reflection::ParameterModifier>*>  modifiers) ;

/// @brief Method HasElementTypeImpl, addr 0x269dfd8, size 0x38, virtual true, abstract: false, final false
inline bool HasElementTypeImpl() ;

/// @brief Method InvokeMember, addr 0x269e010, size 0x38, virtual true, abstract: false, final false
inline ::System::Object* InvokeMember(::StringW  name, ::System::Reflection::BindingFlags  invokeAttr, ::System::Reflection::Binder*  binder, ::System::Object*  target, ::ArrayW<::System::Object*,::Array<::System::Object*>*>  args, ::ArrayW<::System::Reflection::ParameterModifier,::Array<::System::Reflection::ParameterModifier>*>  modifiers, ::System::Globalization::CultureInfo*  culture, ::ArrayW<::StringW,::Array<::StringW>*>  namedParameters) ;

/// @brief Method IsArrayImpl, addr 0x269e048, size 0x38, virtual true, abstract: false, final false
inline bool IsArrayImpl() ;

/// @brief Method IsByRefImpl, addr 0x269e080, size 0x38, virtual true, abstract: false, final false
inline bool IsByRefImpl() ;

/// @brief Method IsCOMObjectImpl, addr 0x269e0b8, size 0x38, virtual true, abstract: false, final false
inline bool IsCOMObjectImpl() ;

/// @brief Method IsDefined, addr 0x269e0f0, size 0x38, virtual true, abstract: false, final false
inline bool IsDefined(::System::Type*  attributeType, bool  inherit) ;

/// @brief Method IsPointerImpl, addr 0x269e128, size 0x38, virtual true, abstract: false, final false
inline bool IsPointerImpl() ;

/// @brief Method IsPrimitiveImpl, addr 0x269e160, size 0x38, virtual true, abstract: false, final false
inline bool IsPrimitiveImpl() ;

/// @brief Method get_Assembly, addr 0x269da98, size 0x38, virtual true, abstract: false, final false
inline ::System::Reflection::Assembly* get_Assembly() ;

/// @brief Method get_AssemblyQualifiedName, addr 0x269dad0, size 0x38, virtual true, abstract: false, final false
inline ::StringW get_AssemblyQualifiedName() ;

/// @brief Method get_BaseType, addr 0x269db08, size 0x38, virtual true, abstract: false, final false
inline ::System::Type* get_BaseType() ;

/// @brief Method get_FullName, addr 0x269db40, size 0x38, virtual true, abstract: false, final false
inline ::StringW get_FullName() ;

/// @brief Method get_Module, addr 0x269db78, size 0x38, virtual true, abstract: false, final false
inline ::System::Reflection::Module* get_Module() ;

/// @brief Method get_Name, addr 0x269dbb0, size 0x38, virtual true, abstract: false, final false
inline ::StringW get_Name() ;

/// @brief Method get_Namespace, addr 0x269dbe8, size 0x38, virtual true, abstract: false, final false
inline ::StringW get_Namespace() ;

/// @brief Method get_UnderlyingSystemType, addr 0x269dc20, size 0x38, virtual true, abstract: false, final false
inline ::System::Type* get_UnderlyingSystemType() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GenericTypeParameterBuilder() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GenericTypeParameterBuilder", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GenericTypeParameterBuilder(GenericTypeParameterBuilder && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GenericTypeParameterBuilder", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GenericTypeParameterBuilder(GenericTypeParameterBuilder const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3197};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Reflection::Emit::GenericTypeParameterBuilder, 0x18>, "Size mismatch!");

} // namespace end def System::Reflection::Emit
NEED_NO_BOX(::System::Reflection::Emit::GenericTypeParameterBuilder);
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::Emit::GenericTypeParameterBuilder*, "System.Reflection.Emit", "GenericTypeParameterBuilder");
