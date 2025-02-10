#pragma once
// IWYU pragma private; include "VROSC/LoopListPreviewItem.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "VROSC/zzzz__ILoopGroupListItem_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LoopListPreviewItem)
namespace UnityEngine {
class RectTransform;
}
// Forward declare root types
namespace VROSC {
class LoopListPreviewItem;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::LoopListPreviewItem);
// Dependencies UnityEngine.MonoBehaviour, VROSC.ILoopGroupListItem
namespace VROSC {
// Is value type: false
// CS Name: VROSC.LoopListPreviewItem
class CORDL_TYPE LoopListPreviewItem : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_PositionInGroup, put=set_PositionInGroup)) int32_t  PositionInGroup;

 __declspec(property(get=get_RectTransform)) ::UnityW<::UnityEngine::RectTransform>  RectTransform;

/// @brief Field <PositionInGroup>k__BackingField, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__PositionInGroup_k__BackingField, put=__cordl_internal_set__PositionInGroup_k__BackingField)) int32_t  _PositionInGroup_k__BackingField;

/// @brief Field _rectTransform, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__rectTransform, put=__cordl_internal_set__rectTransform)) ::UnityW<::UnityEngine::RectTransform>  _rectTransform;

/// @brief Convert operator to "::VROSC::ILoopGroupListItem"
constexpr operator  ::VROSC::ILoopGroupListItem*() noexcept;

static inline ::VROSC::LoopListPreviewItem* New_ctor() ;

/// @brief Method SetActive, addr 0x18b4178, size 0x28, virtual false, abstract: false, final false
inline void SetActive(bool  active) ;

/// @brief Method SetPositionInGroup, addr 0x18b4388, size 0x8, virtual true, abstract: false, final true
inline void SetPositionInGroup(int32_t  position) ;

constexpr int32_t const& __cordl_internal_get__PositionInGroup_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__PositionInGroup_k__BackingField() ;

constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get__rectTransform() const;

constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get__rectTransform() ;

constexpr void __cordl_internal_set__PositionInGroup_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__rectTransform(::UnityW<::UnityEngine::RectTransform>  value) ;

/// @brief Method .ctor, addr 0x18b4c64, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_PositionInGroup, addr 0x18b4c54, size 0x8, virtual true, abstract: false, final true
inline int32_t get_PositionInGroup() ;

/// @brief Method get_RectTransform, addr 0x18b4c5c, size 0x8, virtual true, abstract: false, final true
inline ::UnityW<::UnityEngine::RectTransform> get_RectTransform() ;

/// @brief Convert to "::VROSC::ILoopGroupListItem"
constexpr ::VROSC::ILoopGroupListItem* i___VROSC__ILoopGroupListItem() noexcept;

/// @brief Method set_PositionInGroup, addr 0x18b4c4c, size 0x8, virtual false, abstract: false, final false
inline void set_PositionInGroup(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LoopListPreviewItem() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LoopListPreviewItem", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LoopListPreviewItem(LoopListPreviewItem && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LoopListPreviewItem", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LoopListPreviewItem(LoopListPreviewItem const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{724};

/// @brief Field _rectTransform, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RectTransform>  ____rectTransform;

/// @brief Field <PositionInGroup>k__BackingField, offset: 0x28, size: 0x4, def value: None
 int32_t  ____PositionInGroup_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::LoopListPreviewItem, ____rectTransform) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopListPreviewItem, ____PositionInGroup_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::LoopListPreviewItem, 0x30>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::LoopListPreviewItem);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::LoopListPreviewItem*, "VROSC", "LoopListPreviewItem");
