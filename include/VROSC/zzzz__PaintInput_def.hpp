#pragma once
// IWYU pragma private; include "VROSC/PaintInput.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "VROSC/zzzz__InputArea_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(PaintInput)
namespace VROSC {
class ClickData;
}
namespace VROSC {
class Paint;
}
// Forward declare root types
namespace VROSC {
class PaintInput;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::PaintInput);
// Dependencies VROSC.InputArea
namespace VROSC {
// Is value type: false
// CS Name: VROSC.PaintInput
class CORDL_TYPE PaintInput : public ::VROSC::InputArea {
public:
// Declarations
/// @brief Field _brushIsInBlurMode, offset 0xb0, size 0x1 
 __declspec(property(get=__cordl_internal_get__brushIsInBlurMode, put=__cordl_internal_set__brushIsInBlurMode)) bool  _brushIsInBlurMode;

/// @brief Field _lastPoint, offset 0xb4, size 0x4 
 __declspec(property(get=__cordl_internal_get__lastPoint, put=__cordl_internal_set__lastPoint)) int32_t  _lastPoint;

/// @brief Field _lastStrength, offset 0xb8, size 0x4 
 __declspec(property(get=__cordl_internal_get__lastStrength, put=__cordl_internal_set__lastStrength)) float_t  _lastStrength;

/// @brief Field _paint, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get__paint, put=__cordl_internal_set__paint)) ::UnityW<::VROSC::Paint>  _paint;

/// @brief Method GetInterpolationPoints, addr 0x1898928, size 0x34, virtual false, abstract: false, final false
inline void GetInterpolationPoints(int32_t  point, ::ByRef<int32_t>  low, ::ByRef<int32_t>  high) ;

/// @brief Method GetInterpolationStrengths, addr 0x189895c, size 0x40, virtual false, abstract: false, final false
inline void GetInterpolationStrengths(int32_t  point, float_t  strength, ::ByRef<float_t>  startStrength, ::ByRef<float_t>  endStrength) ;

static inline ::VROSC::PaintInput* New_ctor() ;

/// @brief Method SetBrushIsBlurring, addr 0x1898730, size 0xc, virtual false, abstract: false, final false
inline void SetBrushIsBlurring(bool  brushIsInBlurMode) ;

/// @brief Method SetIsInteracting, addr 0x189873c, size 0x28, virtual true, abstract: false, final false
inline void SetIsInteracting(::VROSC::ClickData*  clickData, bool  isPainting) ;

/// @brief Method UpdateInput, addr 0x1898764, size 0x1c4, virtual true, abstract: false, final false
inline void UpdateInput() ;

constexpr bool const& __cordl_internal_get__brushIsInBlurMode() const;

constexpr bool& __cordl_internal_get__brushIsInBlurMode() ;

constexpr int32_t const& __cordl_internal_get__lastPoint() const;

constexpr int32_t& __cordl_internal_get__lastPoint() ;

constexpr float_t const& __cordl_internal_get__lastStrength() const;

constexpr float_t& __cordl_internal_get__lastStrength() ;

constexpr ::UnityW<::VROSC::Paint> const& __cordl_internal_get__paint() const;

constexpr ::UnityW<::VROSC::Paint>& __cordl_internal_get__paint() ;

constexpr void __cordl_internal_set__brushIsInBlurMode(bool  value) ;

constexpr void __cordl_internal_set__lastPoint(int32_t  value) ;

constexpr void __cordl_internal_set__lastStrength(float_t  value) ;

constexpr void __cordl_internal_set__paint(::UnityW<::VROSC::Paint>  value) ;

/// @brief Method .ctor, addr 0x189899c, size 0xc, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PaintInput() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PaintInput", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PaintInput(PaintInput && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PaintInput", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PaintInput(PaintInput const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{654};

/// @brief Field _paint, offset: 0xa8, size: 0x8, def value: None
 ::UnityW<::VROSC::Paint>  ____paint;

/// @brief Field _brushIsInBlurMode, offset: 0xb0, size: 0x1, def value: None
 bool  ____brushIsInBlurMode;

/// @brief Field _lastPoint, offset: 0xb4, size: 0x4, def value: None
 int32_t  ____lastPoint;

/// @brief Field _lastStrength, offset: 0xb8, size: 0x4, def value: None
 float_t  ____lastStrength;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::PaintInput, ____paint) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::VROSC::PaintInput, ____brushIsInBlurMode) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::VROSC::PaintInput, ____lastPoint) == 0xb4, "Offset mismatch!");

static_assert(offsetof(::VROSC::PaintInput, ____lastStrength) == 0xb8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::PaintInput, 0xc0>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::PaintInput);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::PaintInput*, "VROSC", "PaintInput");
