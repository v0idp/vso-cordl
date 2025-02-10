#pragma once
// IWYU pragma private; include "VROSC/UISliderData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(UISliderData)
namespace VROSC {
class MinMaxFloat;
}
// Forward declare root types
namespace VROSC {
class UISliderData;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::UISliderData);
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.UISliderData
class CORDL_TYPE UISliderData : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_CanBeSetToInteger)) bool  CanBeSetToInteger;

 __declspec(property(get=get_IsIntegerMode)) bool  IsIntegerMode;

 __declspec(property(get=get_Loop)) bool  Loop;

 __declspec(property(get=get_Precission)) ::StringW  Precission;

 __declspec(property(get=get_ValueName)) ::StringW  ValueName;

 __declspec(property(get=get_ValueRange)) ::VROSC::MinMaxFloat*  ValueRange;

/// @brief Field _canBeSetToInteger, offset 0x24, size 0x1 
 __declspec(property(get=__cordl_internal_get__canBeSetToInteger, put=__cordl_internal_set__canBeSetToInteger)) bool  _canBeSetToInteger;

/// @brief Field _isInIntegerMode, offset 0x26, size 0x1 
 __declspec(property(get=__cordl_internal_get__isInIntegerMode, put=__cordl_internal_set__isInIntegerMode)) bool  _isInIntegerMode;

/// @brief Field _loop, offset 0x25, size 0x1 
 __declspec(property(get=__cordl_internal_get__loop, put=__cordl_internal_set__loop)) bool  _loop;

/// @brief Field _precission, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__precission, put=__cordl_internal_set__precission)) int32_t  _precission;

/// @brief Field _valueName, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__valueName, put=__cordl_internal_set__valueName)) ::StringW  _valueName;

/// @brief Field _valueRange, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__valueRange, put=__cordl_internal_set__valueRange)) ::VROSC::MinMaxFloat*  _valueRange;

/// @brief Method GetValue, addr 0x1771534, size 0x130, virtual false, abstract: false, final false
inline float_t GetValue(float_t  value) ;

/// @brief Method MaxToString, addr 0x1771784, size 0x120, virtual false, abstract: false, final false
inline ::StringW MaxToString() ;

/// @brief Method MinToString, addr 0x1771664, size 0x120, virtual false, abstract: false, final false
inline ::StringW MinToString() ;

static inline ::VROSC::UISliderData* New_ctor() ;

/// @brief Method Set, addr 0x17709a8, size 0x14, virtual false, abstract: false, final false
inline void Set(::StringW  name, ::VROSC::MinMaxFloat*  range, int32_t  precission, bool  canBeSetToInteger) ;

/// @brief Method SetIntegerMode, addr 0x17718a4, size 0xc, virtual false, abstract: false, final false
inline void SetIntegerMode(bool  shouldBeInIntegerMode) ;

/// @brief Method ToggleIntegerMode, addr 0x17718b0, size 0x18, virtual false, abstract: false, final false
inline void ToggleIntegerMode() ;

/// @brief Method ValueToString, addr 0x17714ac, size 0x88, virtual false, abstract: false, final false
inline ::StringW ValueToString(float_t  value) ;

constexpr bool const& __cordl_internal_get__canBeSetToInteger() const;

constexpr bool& __cordl_internal_get__canBeSetToInteger() ;

constexpr bool const& __cordl_internal_get__isInIntegerMode() const;

constexpr bool& __cordl_internal_get__isInIntegerMode() ;

constexpr bool const& __cordl_internal_get__loop() const;

constexpr bool& __cordl_internal_get__loop() ;

constexpr int32_t const& __cordl_internal_get__precission() const;

constexpr int32_t& __cordl_internal_get__precission() ;

constexpr ::StringW const& __cordl_internal_get__valueName() const;

constexpr ::StringW& __cordl_internal_get__valueName() ;

constexpr ::VROSC::MinMaxFloat* const& __cordl_internal_get__valueRange() const;

constexpr ::VROSC::MinMaxFloat*& __cordl_internal_get__valueRange() ;

constexpr void __cordl_internal_set__canBeSetToInteger(bool  value) ;

constexpr void __cordl_internal_set__isInIntegerMode(bool  value) ;

constexpr void __cordl_internal_set__loop(bool  value) ;

constexpr void __cordl_internal_set__precission(int32_t  value) ;

constexpr void __cordl_internal_set__valueName(::StringW  value) ;

constexpr void __cordl_internal_set__valueRange(::VROSC::MinMaxFloat*  value) ;

/// @brief Method .ctor, addr 0x17718c8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_CanBeSetToInteger, addr 0x1771494, size 0x8, virtual false, abstract: false, final false
inline bool get_CanBeSetToInteger() ;

/// @brief Method get_IsIntegerMode, addr 0x177149c, size 0x8, virtual false, abstract: false, final false
inline bool get_IsIntegerMode() ;

/// @brief Method get_Loop, addr 0x17714a4, size 0x8, virtual false, abstract: false, final false
inline bool get_Loop() ;

/// @brief Method get_Precission, addr 0x1771410, size 0x84, virtual false, abstract: false, final false
inline ::StringW get_Precission() ;

/// @brief Method get_ValueName, addr 0x1771400, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_ValueName() ;

/// @brief Method get_ValueRange, addr 0x1771408, size 0x8, virtual false, abstract: false, final false
inline ::VROSC::MinMaxFloat* get_ValueRange() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UISliderData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UISliderData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UISliderData(UISliderData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UISliderData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UISliderData(UISliderData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1249};

/// @brief Field _valueName, offset: 0x10, size: 0x8, def value: None
 ::StringW  ____valueName;

/// @brief Field _valueRange, offset: 0x18, size: 0x8, def value: None
 ::VROSC::MinMaxFloat*  ____valueRange;

/// @brief Field _precission, offset: 0x20, size: 0x4, def value: None
 int32_t  ____precission;

/// @brief Field _canBeSetToInteger, offset: 0x24, size: 0x1, def value: None
 bool  ____canBeSetToInteger;

/// @brief Field _loop, offset: 0x25, size: 0x1, def value: None
 bool  ____loop;

/// @brief Field _isInIntegerMode, offset: 0x26, size: 0x1, def value: None
 bool  ____isInIntegerMode;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::UISliderData, ____valueName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::UISliderData, ____valueRange) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::UISliderData, ____precission) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::UISliderData, ____canBeSetToInteger) == 0x24, "Offset mismatch!");

static_assert(offsetof(::VROSC::UISliderData, ____loop) == 0x25, "Offset mismatch!");

static_assert(offsetof(::VROSC::UISliderData, ____isInIntegerMode) == 0x26, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::UISliderData, 0x28>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::UISliderData);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::UISliderData*, "VROSC", "UISliderData");
