#pragma once
// IWYU pragma private; include "VROSC/SetTooltipsOnInteractable.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(SetTooltipsOnInteractable)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace VROSC {
class TooltipData;
}
// Forward declare root types
namespace VROSC {
class SetTooltipsOnInteractable;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::SetTooltipsOnInteractable);
// Dependencies UnityEngine.MonoBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.SetTooltipsOnInteractable
class CORDL_TYPE SetTooltipsOnInteractable : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _tooltipDatas, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__tooltipDatas, put=__cordl_internal_set__tooltipDatas)) ::System::Collections::Generic::List_1<::VROSC::TooltipData*>*  _tooltipDatas;

static inline ::VROSC::SetTooltipsOnInteractable* New_ctor() ;

/// @brief Method Start, addr 0x1890888, size 0x5c, virtual false, abstract: false, final false
inline void Start() ;

constexpr ::System::Collections::Generic::List_1<::VROSC::TooltipData*>* const& __cordl_internal_get__tooltipDatas() const;

constexpr ::System::Collections::Generic::List_1<::VROSC::TooltipData*>*& __cordl_internal_get__tooltipDatas() ;

constexpr void __cordl_internal_set__tooltipDatas(::System::Collections::Generic::List_1<::VROSC::TooltipData*>*  value) ;

/// @brief Method .ctor, addr 0x18908e4, size 0x7c, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SetTooltipsOnInteractable() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SetTooltipsOnInteractable", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SetTooltipsOnInteractable(SetTooltipsOnInteractable && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SetTooltipsOnInteractable", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SetTooltipsOnInteractable(SetTooltipsOnInteractable const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{632};

/// @brief Field _tooltipDatas, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::VROSC::TooltipData*>*  ____tooltipDatas;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::SetTooltipsOnInteractable, ____tooltipDatas) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::SetTooltipsOnInteractable, 0x28>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::SetTooltipsOnInteractable);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::SetTooltipsOnInteractable*, "VROSC", "SetTooltipsOnInteractable");
