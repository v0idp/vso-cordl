#pragma once
// IWYU pragma private; include "Vuplex/WebView/Internal/JsonArrayWrapper_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(JsonArrayWrapper_1)
// Forward declare root types
namespace Vuplex::WebView::Internal {
template<typename T>
class JsonArrayWrapper_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Vuplex::WebView::Internal::JsonArrayWrapper_1);
// Dependencies System.Object
namespace Vuplex::WebView::Internal {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Vuplex.WebView.Internal.JsonArrayWrapper`1<T>
class CORDL_TYPE JsonArrayWrapper_1 : public ::System::Object {
public:
// Declarations
/// @brief Field Items, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_Items, put=__cordl_internal_set_Items)) ::ArrayW<T,::Array<T>*>  Items;

static inline ::Vuplex::WebView::Internal::JsonArrayWrapper_1<T>* New_ctor() ;

static inline ::Vuplex::WebView::Internal::JsonArrayWrapper_1<T>* New_ctor(::ArrayW<T,::Array<T>*>  items) ;

constexpr ::ArrayW<T,::Array<T>*> const& __cordl_internal_get_Items() const;

constexpr ::ArrayW<T,::Array<T>*>& __cordl_internal_get_Items() ;

constexpr void __cordl_internal_set_Items(::ArrayW<T,::Array<T>*>  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::ArrayW<T,::Array<T>*>  items) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr JsonArrayWrapper_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "JsonArrayWrapper_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
JsonArrayWrapper_1(JsonArrayWrapper_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "JsonArrayWrapper_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
JsonArrayWrapper_1(JsonArrayWrapper_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{246};

/// @brief Field Items, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<T,::Array<T>*>  ___Items;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Vuplex::WebView::Internal
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Vuplex::WebView::Internal::JsonArrayWrapper_1, "Vuplex.WebView.Internal", "JsonArrayWrapper`1");
