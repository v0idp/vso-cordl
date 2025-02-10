#pragma once
// IWYU pragma private; include "Vuplex/WebView/EventArgs_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__EventArgs_def.hpp"
CORDL_MODULE_EXPORT(EventArgs_1)
// Forward declare root types
namespace Vuplex::WebView {
template<typename T>
class EventArgs_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Vuplex::WebView::EventArgs_1);
// Dependencies System.EventArgs
namespace Vuplex::WebView {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Vuplex.WebView.EventArgs`1<T>
class CORDL_TYPE EventArgs_1 : public ::System::EventArgs {
public:
// Declarations
 __declspec(property(get=get_Value, put=set_Value)) T  Value;

/// @brief Field <Value>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__Value_k__BackingField, put=__cordl_internal_set__Value_k__BackingField)) T  _Value_k__BackingField;

static inline ::Vuplex::WebView::EventArgs_1<T>* New_ctor(T  val) ;

constexpr T const& __cordl_internal_get__Value_k__BackingField() const;

constexpr T& __cordl_internal_get__Value_k__BackingField() ;

constexpr void __cordl_internal_set__Value_k__BackingField(T  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(T  val) ;

/// @brief Method get_Value, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline T get_Value() ;

/// @brief Method set_Value, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_Value(T  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EventArgs_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EventArgs_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EventArgs_1(EventArgs_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EventArgs_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EventArgs_1(EventArgs_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{137};

/// @brief Field <Value>k__BackingField, offset: 0x10, size: 0x8, def value: None
 T  ____Value_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Vuplex::WebView
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Vuplex::WebView::EventArgs_1, "Vuplex.WebView", "EventArgs`1");
