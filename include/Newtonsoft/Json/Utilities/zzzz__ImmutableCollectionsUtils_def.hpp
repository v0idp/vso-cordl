#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Utilities/ImmutableCollectionsUtils.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ImmutableCollectionsUtils)
namespace Newtonsoft::Json::Serialization {
template<typename T>
class ObjectConstructor_1;
}
namespace Newtonsoft::Json::Utilities {
class ImmutableCollectionsUtils_ImmutableCollectionTypeInfo;
}
namespace Newtonsoft::Json::Utilities {
class ImmutableCollectionsUtils___c;
}
namespace Newtonsoft::Json::Utilities {
class ImmutableCollectionsUtils___c__DisplayClass24_0;
}
namespace Newtonsoft::Json::Utilities {
class ImmutableCollectionsUtils___c__DisplayClass25_0;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace System::Reflection {
class MethodInfo;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Newtonsoft::Json::Utilities {
class ImmutableCollectionsUtils;
}
namespace Newtonsoft::Json::Utilities {
class ImmutableCollectionsUtils_ImmutableCollectionTypeInfo;
}
namespace Newtonsoft::Json::Utilities {
class ImmutableCollectionsUtils___c;
}
namespace Newtonsoft::Json::Utilities {
class ImmutableCollectionsUtils___c__DisplayClass24_0;
}
namespace Newtonsoft::Json::Utilities {
class ImmutableCollectionsUtils___c__DisplayClass25_0;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Utilities::ImmutableCollectionsUtils);
MARK_REF_PTR_T(::Newtonsoft::Json::Utilities::ImmutableCollectionsUtils_ImmutableCollectionTypeInfo);
MARK_REF_PTR_T(::Newtonsoft::Json::Utilities::ImmutableCollectionsUtils___c);
MARK_REF_PTR_T(::Newtonsoft::Json::Utilities::ImmutableCollectionsUtils___c__DisplayClass24_0);
MARK_REF_PTR_T(::Newtonsoft::Json::Utilities::ImmutableCollectionsUtils___c__DisplayClass25_0);
// Dependencies System.Object
namespace Newtonsoft::Json::Utilities {
// Is value type: false
// CS Name: Newtonsoft.Json.Utilities.ImmutableCollectionsUtils/ImmutableCollectionTypeInfo
class CORDL_TYPE ImmutableCollectionsUtils_ImmutableCollectionTypeInfo : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_BuilderTypeName, put=set_BuilderTypeName)) ::StringW  BuilderTypeName;

 __declspec(property(get=get_ContractTypeName, put=set_ContractTypeName)) ::StringW  ContractTypeName;

 __declspec(property(get=get_CreatedTypeName, put=set_CreatedTypeName)) ::StringW  CreatedTypeName;

/// @brief Field <BuilderTypeName>k__BackingField, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__BuilderTypeName_k__BackingField, put=__cordl_internal_set__BuilderTypeName_k__BackingField)) ::StringW  _BuilderTypeName_k__BackingField;

/// @brief Field <ContractTypeName>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__ContractTypeName_k__BackingField, put=__cordl_internal_set__ContractTypeName_k__BackingField)) ::StringW  _ContractTypeName_k__BackingField;

/// @brief Field <CreatedTypeName>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__CreatedTypeName_k__BackingField, put=__cordl_internal_set__CreatedTypeName_k__BackingField)) ::StringW  _CreatedTypeName_k__BackingField;

static inline ::Newtonsoft::Json::Utilities::ImmutableCollectionsUtils_ImmutableCollectionTypeInfo* New_ctor(::StringW  contractTypeName, ::StringW  createdTypeName, ::StringW  builderTypeName) ;

constexpr ::StringW const& __cordl_internal_get__BuilderTypeName_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__BuilderTypeName_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__ContractTypeName_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__ContractTypeName_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__CreatedTypeName_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__CreatedTypeName_k__BackingField() ;

constexpr void __cordl_internal_set__BuilderTypeName_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__ContractTypeName_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__CreatedTypeName_k__BackingField(::StringW  value) ;

/// @brief Method .ctor, addr 0x27efef0, size 0x3c, virtual false, abstract: false, final false
inline void _ctor(::StringW  contractTypeName, ::StringW  createdTypeName, ::StringW  builderTypeName) ;

/// @brief Method get_BuilderTypeName, addr 0x27eff4c, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_BuilderTypeName() ;

/// @brief Method get_ContractTypeName, addr 0x27eff2c, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_ContractTypeName() ;

/// @brief Method get_CreatedTypeName, addr 0x27eff3c, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_CreatedTypeName() ;

/// @brief Method set_BuilderTypeName, addr 0x27eff54, size 0x8, virtual false, abstract: false, final false
inline void set_BuilderTypeName(::StringW  value) ;

/// @brief Method set_ContractTypeName, addr 0x27eff34, size 0x8, virtual false, abstract: false, final false
inline void set_ContractTypeName(::StringW  value) ;

/// @brief Method set_CreatedTypeName, addr 0x27eff44, size 0x8, virtual false, abstract: false, final false
inline void set_CreatedTypeName(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ImmutableCollectionsUtils_ImmutableCollectionTypeInfo() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ImmutableCollectionsUtils_ImmutableCollectionTypeInfo", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ImmutableCollectionsUtils_ImmutableCollectionTypeInfo(ImmutableCollectionsUtils_ImmutableCollectionTypeInfo && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ImmutableCollectionsUtils_ImmutableCollectionTypeInfo", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ImmutableCollectionsUtils_ImmutableCollectionTypeInfo(ImmutableCollectionsUtils_ImmutableCollectionTypeInfo const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9751};

/// @brief Field <ContractTypeName>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::StringW  ____ContractTypeName_k__BackingField;

/// @brief Field <CreatedTypeName>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::StringW  ____CreatedTypeName_k__BackingField;

/// @brief Field <BuilderTypeName>k__BackingField, offset: 0x20, size: 0x8, def value: None
 ::StringW  ____BuilderTypeName_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Newtonsoft::Json::Utilities::ImmutableCollectionsUtils_ImmutableCollectionTypeInfo, ____ContractTypeName_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Utilities::ImmutableCollectionsUtils_ImmutableCollectionTypeInfo, ____CreatedTypeName_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Utilities::ImmutableCollectionsUtils_ImmutableCollectionTypeInfo, ____BuilderTypeName_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Utilities::ImmutableCollectionsUtils_ImmutableCollectionTypeInfo, 0x28>, "Size mismatch!");

} // namespace end def Newtonsoft::Json::Utilities
// Dependencies System.Object
namespace Newtonsoft::Json::Utilities {
// Is value type: false
// CS Name: Newtonsoft.Json.Utilities.ImmutableCollectionsUtils/<>c
class CORDL_TYPE ImmutableCollectionsUtils___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Newtonsoft::Json::Utilities::ImmutableCollectionsUtils___c*  __9;

/// @brief Field <>9__24_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__24_1, put=setStaticF___9__24_1)) ::System::Func_2<::System::Reflection::MethodInfo*,bool>*  __9__24_1;

/// @brief Field <>9__25_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__25_1, put=setStaticF___9__25_1)) ::System::Func_2<::System::Reflection::MethodInfo*,bool>*  __9__25_1;

static inline ::Newtonsoft::Json::Utilities::ImmutableCollectionsUtils___c* New_ctor() ;

/// @brief Method <TryBuildImmutableForArrayContract>b__24_1, addr 0x27effc0, size 0x94, virtual false, abstract: false, final false
inline bool _TryBuildImmutableForArrayContract_b__24_1(::System::Reflection::MethodInfo*  m) ;

/// @brief Method <TryBuildImmutableForDictionaryContract>b__25_1, addr 0x27f0054, size 0x15c, virtual false, abstract: false, final false
inline bool _TryBuildImmutableForDictionaryContract_b__25_1(::System::Reflection::MethodInfo*  m) ;

/// @brief Method .ctor, addr 0x27effb8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Newtonsoft::Json::Utilities::ImmutableCollectionsUtils___c* getStaticF___9() ;

static inline ::System::Func_2<::System::Reflection::MethodInfo*,bool>* getStaticF___9__24_1() ;

static inline ::System::Func_2<::System::Reflection::MethodInfo*,bool>* getStaticF___9__25_1() ;

static inline void setStaticF___9(::Newtonsoft::Json::Utilities::ImmutableCollectionsUtils___c*  value) ;

static inline void setStaticF___9__24_1(::System::Func_2<::System::Reflection::MethodInfo*,bool>*  value) ;

static inline void setStaticF___9__25_1(::System::Func_2<::System::Reflection::MethodInfo*,bool>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ImmutableCollectionsUtils___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ImmutableCollectionsUtils___c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ImmutableCollectionsUtils___c(ImmutableCollectionsUtils___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ImmutableCollectionsUtils___c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ImmutableCollectionsUtils___c(ImmutableCollectionsUtils___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9752};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Utilities::ImmutableCollectionsUtils___c, 0x10>, "Size mismatch!");

} // namespace end def Newtonsoft::Json::Utilities
// Dependencies System.Object
namespace Newtonsoft::Json::Utilities {
// Is value type: false
// CS Name: Newtonsoft.Json.Utilities.ImmutableCollectionsUtils/<>c__DisplayClass24_0
class CORDL_TYPE ImmutableCollectionsUtils___c__DisplayClass24_0 : public ::System::Object {
public:
// Declarations
/// @brief Field name, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_name, put=__cordl_internal_set_name)) ::StringW  name;

static inline ::Newtonsoft::Json::Utilities::ImmutableCollectionsUtils___c__DisplayClass24_0* New_ctor() ;

/// @brief Method <TryBuildImmutableForArrayContract>b__0, addr 0x27f01b0, size 0x24, virtual false, abstract: false, final false
inline bool _TryBuildImmutableForArrayContract_b__0(::Newtonsoft::Json::Utilities::ImmutableCollectionsUtils_ImmutableCollectionTypeInfo*  d) ;

constexpr ::StringW const& __cordl_internal_get_name() const;

constexpr ::StringW& __cordl_internal_get_name() ;

constexpr void __cordl_internal_set_name(::StringW  value) ;

/// @brief Method .ctor, addr 0x27ef154, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ImmutableCollectionsUtils___c__DisplayClass24_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ImmutableCollectionsUtils___c__DisplayClass24_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ImmutableCollectionsUtils___c__DisplayClass24_0(ImmutableCollectionsUtils___c__DisplayClass24_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ImmutableCollectionsUtils___c__DisplayClass24_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ImmutableCollectionsUtils___c__DisplayClass24_0(ImmutableCollectionsUtils___c__DisplayClass24_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9753};

/// @brief Field name, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___name;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Newtonsoft::Json::Utilities::ImmutableCollectionsUtils___c__DisplayClass24_0, ___name) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Utilities::ImmutableCollectionsUtils___c__DisplayClass24_0, 0x18>, "Size mismatch!");

} // namespace end def Newtonsoft::Json::Utilities
// Dependencies System.Object
namespace Newtonsoft::Json::Utilities {
// Is value type: false
// CS Name: Newtonsoft.Json.Utilities.ImmutableCollectionsUtils/<>c__DisplayClass25_0
class CORDL_TYPE ImmutableCollectionsUtils___c__DisplayClass25_0 : public ::System::Object {
public:
// Declarations
/// @brief Field name, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_name, put=__cordl_internal_set_name)) ::StringW  name;

static inline ::Newtonsoft::Json::Utilities::ImmutableCollectionsUtils___c__DisplayClass25_0* New_ctor() ;

/// @brief Method <TryBuildImmutableForDictionaryContract>b__0, addr 0x27f01d4, size 0x24, virtual false, abstract: false, final false
inline bool _TryBuildImmutableForDictionaryContract_b__0(::Newtonsoft::Json::Utilities::ImmutableCollectionsUtils_ImmutableCollectionTypeInfo*  d) ;

constexpr ::StringW const& __cordl_internal_get_name() const;

constexpr ::StringW& __cordl_internal_get_name() ;

constexpr void __cordl_internal_set_name(::StringW  value) ;

/// @brief Method .ctor, addr 0x27ef620, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ImmutableCollectionsUtils___c__DisplayClass25_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ImmutableCollectionsUtils___c__DisplayClass25_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ImmutableCollectionsUtils___c__DisplayClass25_0(ImmutableCollectionsUtils___c__DisplayClass25_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ImmutableCollectionsUtils___c__DisplayClass25_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ImmutableCollectionsUtils___c__DisplayClass25_0(ImmutableCollectionsUtils___c__DisplayClass25_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9754};

/// @brief Field name, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___name;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Newtonsoft::Json::Utilities::ImmutableCollectionsUtils___c__DisplayClass25_0, ___name) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Utilities::ImmutableCollectionsUtils___c__DisplayClass25_0, 0x18>, "Size mismatch!");

} // namespace end def Newtonsoft::Json::Utilities
// Dependencies System.Object
namespace Newtonsoft::Json::Utilities {
// Is value type: false
// CS Name: Newtonsoft.Json.Utilities.ImmutableCollectionsUtils
class CORDL_TYPE ImmutableCollectionsUtils : public ::System::Object {
public:
// Declarations
using ImmutableCollectionTypeInfo = ::Newtonsoft::Json::Utilities::ImmutableCollectionsUtils_ImmutableCollectionTypeInfo;

using __c = ::Newtonsoft::Json::Utilities::ImmutableCollectionsUtils___c;

using __c__DisplayClass24_0 = ::Newtonsoft::Json::Utilities::ImmutableCollectionsUtils___c__DisplayClass24_0;

using __c__DisplayClass25_0 = ::Newtonsoft::Json::Utilities::ImmutableCollectionsUtils___c__DisplayClass25_0;

/// @brief Field ArrayContractImmutableCollectionDefinitions, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_ArrayContractImmutableCollectionDefinitions, put=setStaticF_ArrayContractImmutableCollectionDefinitions)) ::System::Collections::Generic::IList_1<::Newtonsoft::Json::Utilities::ImmutableCollectionsUtils_ImmutableCollectionTypeInfo*>*  ArrayContractImmutableCollectionDefinitions;

/// @brief Field DictionaryContractImmutableCollectionDefinitions, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_DictionaryContractImmutableCollectionDefinitions, put=setStaticF_DictionaryContractImmutableCollectionDefinitions)) ::System::Collections::Generic::IList_1<::Newtonsoft::Json::Utilities::ImmutableCollectionsUtils_ImmutableCollectionTypeInfo*>*  DictionaryContractImmutableCollectionDefinitions;

/// @brief Method TryBuildImmutableForArrayContract, addr 0x27eece4, size 0x450, virtual false, abstract: false, final false
static inline bool TryBuildImmutableForArrayContract(::System::Type*  underlyingType, ::System::Type*  collectionItemType, ::ByRef<::System::Type*>  createdType, ::ByRef<::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>*>  parameterizedCreator) ;

/// @brief Method TryBuildImmutableForDictionaryContract, addr 0x27ef17c, size 0x4a4, virtual false, abstract: false, final false
static inline bool TryBuildImmutableForDictionaryContract(::System::Type*  underlyingType, ::System::Type*  keyItemType, ::System::Type*  valueItemType, ::ByRef<::System::Type*>  createdType, ::ByRef<::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>*>  parameterizedCreator) ;

static inline ::System::Collections::Generic::IList_1<::Newtonsoft::Json::Utilities::ImmutableCollectionsUtils_ImmutableCollectionTypeInfo*>* getStaticF_ArrayContractImmutableCollectionDefinitions() ;

static inline ::System::Collections::Generic::IList_1<::Newtonsoft::Json::Utilities::ImmutableCollectionsUtils_ImmutableCollectionTypeInfo*>* getStaticF_DictionaryContractImmutableCollectionDefinitions() ;

static inline void setStaticF_ArrayContractImmutableCollectionDefinitions(::System::Collections::Generic::IList_1<::Newtonsoft::Json::Utilities::ImmutableCollectionsUtils_ImmutableCollectionTypeInfo*>*  value) ;

static inline void setStaticF_DictionaryContractImmutableCollectionDefinitions(::System::Collections::Generic::IList_1<::Newtonsoft::Json::Utilities::ImmutableCollectionsUtils_ImmutableCollectionTypeInfo*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ImmutableCollectionsUtils() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ImmutableCollectionsUtils", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ImmutableCollectionsUtils(ImmutableCollectionsUtils && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ImmutableCollectionsUtils", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ImmutableCollectionsUtils(ImmutableCollectionsUtils const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9755};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Utilities::ImmutableCollectionsUtils, 0x10>, "Size mismatch!");

} // namespace end def Newtonsoft::Json::Utilities
NEED_NO_BOX(::Newtonsoft::Json::Utilities::ImmutableCollectionsUtils);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Utilities::ImmutableCollectionsUtils*, "Newtonsoft.Json.Utilities", "ImmutableCollectionsUtils");
NEED_NO_BOX(::Newtonsoft::Json::Utilities::ImmutableCollectionsUtils_ImmutableCollectionTypeInfo);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Utilities::ImmutableCollectionsUtils_ImmutableCollectionTypeInfo*, "Newtonsoft.Json.Utilities", "ImmutableCollectionsUtils/ImmutableCollectionTypeInfo");
NEED_NO_BOX(::Newtonsoft::Json::Utilities::ImmutableCollectionsUtils___c);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Utilities::ImmutableCollectionsUtils___c*, "Newtonsoft.Json.Utilities", "ImmutableCollectionsUtils/<>c");
NEED_NO_BOX(::Newtonsoft::Json::Utilities::ImmutableCollectionsUtils___c__DisplayClass24_0);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Utilities::ImmutableCollectionsUtils___c__DisplayClass24_0*, "Newtonsoft.Json.Utilities", "ImmutableCollectionsUtils/<>c__DisplayClass24_0");
NEED_NO_BOX(::Newtonsoft::Json::Utilities::ImmutableCollectionsUtils___c__DisplayClass25_0);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Utilities::ImmutableCollectionsUtils___c__DisplayClass25_0*, "Newtonsoft.Json.Utilities", "ImmutableCollectionsUtils/<>c__DisplayClass25_0");
