#pragma once
// IWYU pragma private; include "Proyecto26/JsonHelper.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(JsonHelper)
namespace Proyecto26 {
template<typename T>
class JsonHelper_Wrapper_1;
}
// Forward declare root types
namespace Proyecto26 {
class JsonHelper;
}
namespace Proyecto26 {
template<typename T>
class JsonHelper_Wrapper_1;
}
// Write type traits
MARK_REF_PTR_T(::Proyecto26::JsonHelper);
MARK_GEN_REF_PTR_T(::Proyecto26::JsonHelper_Wrapper_1);
// Dependencies System.Object
namespace Proyecto26 {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Proyecto26.JsonHelper/Wrapper`1<T>
class CORDL_TYPE JsonHelper_Wrapper_1 : public ::System::Object {
public:
// Declarations
/// @brief Field Items, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_Items, put=__cordl_internal_set_Items)) ::ArrayW<T,::Array<T>*>  Items;

static inline ::Proyecto26::JsonHelper_Wrapper_1<T>* New_ctor() ;

constexpr ::ArrayW<T,::Array<T>*> const& __cordl_internal_get_Items() const;

constexpr ::ArrayW<T,::Array<T>*>& __cordl_internal_get_Items() ;

constexpr void __cordl_internal_set_Items(::ArrayW<T,::Array<T>*>  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr JsonHelper_Wrapper_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "JsonHelper_Wrapper_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
JsonHelper_Wrapper_1(JsonHelper_Wrapper_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "JsonHelper_Wrapper_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
JsonHelper_Wrapper_1(JsonHelper_Wrapper_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1735};

/// @brief Field Items, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<T,::Array<T>*>  ___Items;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Proyecto26
// Dependencies System.Object
namespace Proyecto26 {
// Is value type: false
// CS Name: Proyecto26.JsonHelper
class CORDL_TYPE JsonHelper : public ::System::Object {
public:
// Declarations
template<typename T>
using Wrapper_1 = ::Proyecto26::JsonHelper_Wrapper_1<T>;

/// @brief Method ArrayFromJson, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::ArrayW<T,::Array<T>*> ArrayFromJson(::StringW  json) ;

/// @brief Method ArrayToJsonString, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::StringW ArrayToJsonString(::ArrayW<T,::Array<T>*>  array) ;

/// @brief Method ArrayToJsonString, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::StringW ArrayToJsonString(::ArrayW<T,::Array<T>*>  array, bool  prettyPrint) ;

/// @brief Method FromJsonString, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::ArrayW<T,::Array<T>*> FromJsonString(::StringW  json) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr JsonHelper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "JsonHelper", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
JsonHelper(JsonHelper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "JsonHelper", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
JsonHelper(JsonHelper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1736};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Proyecto26::JsonHelper, 0x10>, "Size mismatch!");

} // namespace end def Proyecto26
NEED_NO_BOX(::Proyecto26::JsonHelper);
DEFINE_IL2CPP_ARG_TYPE(::Proyecto26::JsonHelper*, "Proyecto26", "JsonHelper");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Proyecto26::JsonHelper_Wrapper_1, "Proyecto26", "JsonHelper/Wrapper`1");
