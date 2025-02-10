#pragma once
// IWYU pragma private; include "VROSC/UIScrollableItem.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(UIScrollableItem)
// Forward declare root types
namespace VROSC {
class UIScrollableItem;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::UIScrollableItem);
// Dependencies UnityEngine.MonoBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.UIScrollableItem
class CORDL_TYPE UIScrollableItem : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_Index, put=set_Index)) int32_t  Index;

 __declspec(property(get=get_IsActive, put=set_IsActive)) bool  IsActive;

 __declspec(property(get=get_IsDisabled, put=set_IsDisabled)) bool  IsDisabled;

 __declspec(property(get=get_IsHovering, put=set_IsHovering)) bool  IsHovering;

 __declspec(property(get=get_Length)) float_t  Length;

 __declspec(property(get=get_Value, put=set_Value)) ::StringW  Value;

/// @brief Field <Index>k__BackingField, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get__Index_k__BackingField, put=__cordl_internal_set__Index_k__BackingField)) int32_t  _Index_k__BackingField;

/// @brief Field <IsActive>k__BackingField, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsActive_k__BackingField, put=__cordl_internal_set__IsActive_k__BackingField)) bool  _IsActive_k__BackingField;

/// @brief Field <IsDisabled>k__BackingField, offset 0x32, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsDisabled_k__BackingField, put=__cordl_internal_set__IsDisabled_k__BackingField)) bool  _IsDisabled_k__BackingField;

/// @brief Field <IsHovering>k__BackingField, offset 0x31, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsHovering_k__BackingField, put=__cordl_internal_set__IsHovering_k__BackingField)) bool  _IsHovering_k__BackingField;

/// @brief Field <Value>k__BackingField, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__Value_k__BackingField, put=__cordl_internal_set__Value_k__BackingField)) ::StringW  _Value_k__BackingField;

/// @brief Field _length, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__length, put=__cordl_internal_set__length)) float_t  _length;

static inline ::VROSC::UIScrollableItem* New_ctor() ;

/// @brief Method OnDrawGizmosSelected, addr 0x17498bc, size 0x44, virtual false, abstract: false, final false
inline void OnDrawGizmosSelected() ;

/// @brief Method SetActive, addr 0x1749890, size 0x14, virtual true, abstract: false, final false
inline void SetActive(bool  active) ;

/// @brief Method SetDisabled, addr 0x17498a4, size 0x14, virtual true, abstract: false, final false
inline void SetDisabled(bool  disabled) ;

/// @brief Method SetHovering, addr 0x174987c, size 0x14, virtual true, abstract: false, final false
inline void SetHovering(bool  hovering) ;

/// @brief Method SetIndex, addr 0x17486f8, size 0x8, virtual false, abstract: false, final false
inline void SetIndex(int32_t  index) ;

/// @brief Method Setup, addr 0x1749870, size 0xc, virtual true, abstract: false, final false
inline void Setup(int32_t  index, ::StringW  value) ;

/// @brief Method UpdateColors, addr 0x17498b8, size 0x4, virtual true, abstract: false, final false
inline void UpdateColors() ;

constexpr int32_t const& __cordl_internal_get__Index_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__Index_k__BackingField() ;

constexpr bool const& __cordl_internal_get__IsActive_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsActive_k__BackingField() ;

constexpr bool const& __cordl_internal_get__IsDisabled_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsDisabled_k__BackingField() ;

constexpr bool const& __cordl_internal_get__IsHovering_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsHovering_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__Value_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__Value_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__length() const;

constexpr float_t& __cordl_internal_get__length() ;

constexpr void __cordl_internal_set__Index_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__IsActive_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__IsDisabled_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__IsHovering_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__Value_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__length(float_t  value) ;

/// @brief Method .ctor, addr 0x1749900, size 0x58, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Index, addr 0x174980c, size 0x8, virtual false, abstract: false, final false
inline int32_t get_Index() ;

/// @brief Method get_IsActive, addr 0x1749834, size 0x8, virtual false, abstract: false, final false
inline bool get_IsActive() ;

/// @brief Method get_IsDisabled, addr 0x174985c, size 0x8, virtual false, abstract: false, final false
inline bool get_IsDisabled() ;

/// @brief Method get_IsHovering, addr 0x1749848, size 0x8, virtual false, abstract: false, final false
inline bool get_IsHovering() ;

/// @brief Method get_Length, addr 0x174982c, size 0x8, virtual false, abstract: false, final false
inline float_t get_Length() ;

/// @brief Method get_Value, addr 0x174981c, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_Value() ;

/// @brief Method set_Index, addr 0x1749814, size 0x8, virtual false, abstract: false, final false
inline void set_Index(int32_t  value) ;

/// @brief Method set_IsActive, addr 0x174983c, size 0xc, virtual false, abstract: false, final false
inline void set_IsActive(bool  value) ;

/// @brief Method set_IsDisabled, addr 0x1749864, size 0xc, virtual false, abstract: false, final false
inline void set_IsDisabled(bool  value) ;

/// @brief Method set_IsHovering, addr 0x1749850, size 0xc, virtual false, abstract: false, final false
inline void set_IsHovering(bool  value) ;

/// @brief Method set_Value, addr 0x1749824, size 0x8, virtual false, abstract: false, final false
inline void set_Value(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UIScrollableItem() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UIScrollableItem", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UIScrollableItem(UIScrollableItem && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UIScrollableItem", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UIScrollableItem(UIScrollableItem const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1132};

/// @brief Field _length, offset: 0x20, size: 0x4, def value: None
 float_t  ____length;

/// @brief Field <Index>k__BackingField, offset: 0x24, size: 0x4, def value: None
 int32_t  ____Index_k__BackingField;

/// @brief Field <Value>k__BackingField, offset: 0x28, size: 0x8, def value: None
 ::StringW  ____Value_k__BackingField;

/// @brief Field <IsActive>k__BackingField, offset: 0x30, size: 0x1, def value: None
 bool  ____IsActive_k__BackingField;

/// @brief Field <IsHovering>k__BackingField, offset: 0x31, size: 0x1, def value: None
 bool  ____IsHovering_k__BackingField;

/// @brief Field <IsDisabled>k__BackingField, offset: 0x32, size: 0x1, def value: None
 bool  ____IsDisabled_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::UIScrollableItem, ____length) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::UIScrollableItem, ____Index_k__BackingField) == 0x24, "Offset mismatch!");

static_assert(offsetof(::VROSC::UIScrollableItem, ____Value_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::UIScrollableItem, ____IsActive_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::UIScrollableItem, ____IsHovering_k__BackingField) == 0x31, "Offset mismatch!");

static_assert(offsetof(::VROSC::UIScrollableItem, ____IsDisabled_k__BackingField) == 0x32, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::UIScrollableItem, 0x38>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::UIScrollableItem);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::UIScrollableItem*, "VROSC", "UIScrollableItem");
