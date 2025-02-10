#pragma once
// IWYU pragma private; include "VROSC/EnumDisplay.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "VROSC/zzzz__TextDisplay_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EnumDisplay)
namespace VROSC {
struct EnumDisplay_DisplayEnum;
}
namespace VROSC {
class IntNode;
}
// Forward declare root types
namespace VROSC {
struct EnumDisplay_DisplayEnum;
}
namespace VROSC {
class EnumDisplay;
}
// Write type traits
MARK_VAL_T(::VROSC::EnumDisplay_DisplayEnum);
MARK_REF_PTR_T(::VROSC::EnumDisplay);
// Dependencies 
namespace VROSC {
// Is value type: true
// CS Name: VROSC.EnumDisplay/DisplayEnum
struct CORDL_TYPE EnumDisplay_DisplayEnum {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __EnumDisplay_DisplayEnum_Unwrapped
enum struct __EnumDisplay_DisplayEnum_Unwrapped : int32_t {
__E_PlayBehaviour = static_cast<int32_t>(0x0),
__E_Note = static_cast<int32_t>(0x1),
__E_Quantize = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __EnumDisplay_DisplayEnum_Unwrapped () const noexcept {
return static_cast<__EnumDisplay_DisplayEnum_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr EnumDisplay_DisplayEnum() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr EnumDisplay_DisplayEnum(int32_t  value__) noexcept;

/// @brief Field Note value: I32(1)
static ::VROSC::EnumDisplay_DisplayEnum const Note;

/// @brief Field PlayBehaviour value: I32(0)
static ::VROSC::EnumDisplay_DisplayEnum const PlayBehaviour;

/// @brief Field Quantize value: I32(2)
static ::VROSC::EnumDisplay_DisplayEnum const Quantize;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1015};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::VROSC::EnumDisplay_DisplayEnum, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::EnumDisplay_DisplayEnum, 0x4>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies VROSC.EnumDisplay::DisplayEnum, VROSC.TextDisplay
namespace VROSC {
// Is value type: false
// CS Name: VROSC.EnumDisplay
class CORDL_TYPE EnumDisplay : public ::VROSC::TextDisplay {
public:
// Declarations
using DisplayEnum = ::VROSC::EnumDisplay_DisplayEnum;

/// @brief Field _displayEnum, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__displayEnum, put=__cordl_internal_set__displayEnum)) ::VROSC::EnumDisplay_DisplayEnum  _displayEnum;

/// @brief Field _intNode, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__intNode, put=__cordl_internal_set__intNode)) ::UnityW<::VROSC::IntNode>  _intNode;

/// @brief Method InitDisplay, addr 0x1725c54, size 0xf0, virtual true, abstract: false, final false
inline void InitDisplay() ;

static inline ::VROSC::EnumDisplay* New_ctor() ;

/// @brief Method OnDestroy, addr 0x1725ee4, size 0xd8, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method UpdateDisplayEnum, addr 0x1725d94, size 0xb8, virtual false, abstract: false, final false
inline void UpdateDisplayEnum(int32_t  value) ;

constexpr ::VROSC::EnumDisplay_DisplayEnum const& __cordl_internal_get__displayEnum() const;

constexpr ::VROSC::EnumDisplay_DisplayEnum& __cordl_internal_get__displayEnum() ;

constexpr ::UnityW<::VROSC::IntNode> const& __cordl_internal_get__intNode() const;

constexpr ::UnityW<::VROSC::IntNode>& __cordl_internal_get__intNode() ;

constexpr void __cordl_internal_set__displayEnum(::VROSC::EnumDisplay_DisplayEnum  value) ;

constexpr void __cordl_internal_set__intNode(::UnityW<::VROSC::IntNode>  value) ;

/// @brief Method .ctor, addr 0x1725fbc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EnumDisplay() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EnumDisplay", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EnumDisplay(EnumDisplay && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnumDisplay", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnumDisplay(EnumDisplay const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1016};

/// @brief Field _intNode, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::VROSC::IntNode>  ____intNode;

/// @brief Field _displayEnum, offset: 0x30, size: 0x4, def value: None
 ::VROSC::EnumDisplay_DisplayEnum  ____displayEnum;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::EnumDisplay, ____intNode) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::EnumDisplay, ____displayEnum) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::EnumDisplay, 0x38>, "Size mismatch!");

} // namespace end def VROSC
DEFINE_IL2CPP_ARG_TYPE(::VROSC::EnumDisplay_DisplayEnum, "VROSC", "EnumDisplay/DisplayEnum");
NEED_NO_BOX(::VROSC::EnumDisplay);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::EnumDisplay*, "VROSC", "EnumDisplay");
