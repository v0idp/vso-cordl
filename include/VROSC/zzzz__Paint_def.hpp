#pragma once
// IWYU pragma private; include "VROSC/Paint.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Paint)
namespace System {
class Action;
}
namespace UnityEngine {
class AnimationCurve;
}
// Forward declare root types
namespace VROSC {
class Paint;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::Paint);
// Dependencies UnityEngine.MonoBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.Paint
class CORDL_TYPE Paint : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field OnPaintUpdated, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnPaintUpdated, put=__cordl_internal_set_OnPaintUpdated)) ::System::Action*  OnPaintUpdated;

 __declspec(property(get=get_PaintValues, put=set_PaintValues)) ::ArrayW<float_t,::Array<float_t>*>  PaintValues;

 __declspec(property(get=get_Segments)) int32_t  Segments;

/// @brief Field <PaintValues>k__BackingField, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__PaintValues_k__BackingField, put=__cordl_internal_set__PaintValues_k__BackingField)) ::ArrayW<float_t,::Array<float_t>*>  _PaintValues_k__BackingField;

/// @brief Field _brushSize, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get__brushSize, put=__cordl_internal_set__brushSize)) int32_t  _brushSize;

/// @brief Field _segments, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__segments, put=__cordl_internal_set__segments)) int32_t  _segments;

/// @brief Field _strokeStartValues, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__strokeStartValues, put=__cordl_internal_set__strokeStartValues)) ::ArrayW<float_t,::Array<float_t>*>  _strokeStartValues;

/// @brief Method Awake, addr 0x1898070, size 0x6c, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method Blur, addr 0x189837c, size 0x11c, virtual false, abstract: false, final false
inline void Blur(int32_t  start, int32_t  end) ;

/// @brief Method BlurAll, addr 0x1898584, size 0x178, virtual false, abstract: false, final false
inline void BlurAll() ;

/// @brief Method BlurPoint, addr 0x1898498, size 0xec, virtual false, abstract: false, final false
inline void BlurPoint(int32_t  point, float_t  power) ;

/// @brief Method Fill, addr 0x1897f8c, size 0xa8, virtual false, abstract: false, final false
inline void Fill(::UnityEngine::AnimationCurve*  curve) ;

/// @brief Method Fill, addr 0x1894c68, size 0x6c, virtual false, abstract: false, final false
inline void Fill(float_t  fillValue, bool  callback) ;

/// @brief Method FlipHorizontal, addr 0x1897e70, size 0x6c, virtual false, abstract: false, final false
inline void FlipHorizontal() ;

/// @brief Method FlipVertical, addr 0x1897ef4, size 0x78, virtual false, abstract: false, final false
inline void FlipVertical() ;

static inline ::VROSC::Paint* New_ctor() ;

/// @brief Method PaintUpdated, addr 0x18986fc, size 0x1c, virtual false, abstract: false, final false
inline void PaintUpdated() ;

/// @brief Method Set, addr 0x1894be4, size 0x84, virtual false, abstract: false, final false
inline void Set(::ArrayW<float_t,::Array<float_t>*>  volumeKeys) ;

/// @brief Method SetBrushSize, addr 0x18980dc, size 0x8, virtual false, abstract: false, final false
inline void SetBrushSize(int32_t  brushSize) ;

/// @brief Method SetIsPainting, addr 0x1897e24, size 0x34, virtual false, abstract: false, final false
inline void SetIsPainting(bool  painting) ;

/// @brief Method SetPaint, addr 0x18980e4, size 0x23c, virtual false, abstract: false, final false
inline void SetPaint(int32_t  start, float_t  startStrength, int32_t  end, float_t  endStrength) ;

/// @brief Method SetPoint, addr 0x1898320, size 0x5c, virtual false, abstract: false, final false
inline void SetPoint(int32_t  index, float_t  value, bool  affectStrokeStart) ;

constexpr ::System::Action* const& __cordl_internal_get_OnPaintUpdated() const;

constexpr ::System::Action*& __cordl_internal_get_OnPaintUpdated() ;

constexpr ::ArrayW<float_t,::Array<float_t>*> const& __cordl_internal_get__PaintValues_k__BackingField() const;

constexpr ::ArrayW<float_t,::Array<float_t>*>& __cordl_internal_get__PaintValues_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__brushSize() const;

constexpr int32_t& __cordl_internal_get__brushSize() ;

constexpr int32_t const& __cordl_internal_get__segments() const;

constexpr int32_t& __cordl_internal_get__segments() ;

constexpr ::ArrayW<float_t,::Array<float_t>*> const& __cordl_internal_get__strokeStartValues() const;

constexpr ::ArrayW<float_t,::Array<float_t>*>& __cordl_internal_get__strokeStartValues() ;

constexpr void __cordl_internal_set_OnPaintUpdated(::System::Action*  value) ;

constexpr void __cordl_internal_set__PaintValues_k__BackingField(::ArrayW<float_t,::Array<float_t>*>  value) ;

constexpr void __cordl_internal_set__brushSize(int32_t  value) ;

constexpr void __cordl_internal_set__segments(int32_t  value) ;

constexpr void __cordl_internal_set__strokeStartValues(::ArrayW<float_t,::Array<float_t>*>  value) ;

/// @brief Method .ctor, addr 0x1898718, size 0x18, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_PaintValues, addr 0x1898068, size 0x8, virtual false, abstract: false, final false
inline ::ArrayW<float_t,::Array<float_t>*> get_PaintValues() ;

/// @brief Method get_Segments, addr 0x1898058, size 0x8, virtual false, abstract: false, final false
inline int32_t get_Segments() ;

/// @brief Method set_PaintValues, addr 0x1898060, size 0x8, virtual false, abstract: false, final false
inline void set_PaintValues(::ArrayW<float_t,::Array<float_t>*>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Paint() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Paint", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Paint(Paint && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Paint", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Paint(Paint const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{653};

/// @brief Field _segments, offset: 0x20, size: 0x4, def value: None
 int32_t  ____segments;

/// @brief Field <PaintValues>k__BackingField, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<float_t,::Array<float_t>*>  ____PaintValues_k__BackingField;

/// @brief Field _strokeStartValues, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<float_t,::Array<float_t>*>  ____strokeStartValues;

/// @brief Field _brushSize, offset: 0x38, size: 0x4, def value: None
 int32_t  ____brushSize;

/// @brief Field OnPaintUpdated, offset: 0x40, size: 0x8, def value: None
 ::System::Action*  ___OnPaintUpdated;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::Paint, ____segments) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::Paint, ____PaintValues_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::Paint, ____strokeStartValues) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::Paint, ____brushSize) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::Paint, ___OnPaintUpdated) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::Paint, 0x48>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::Paint);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::Paint*, "VROSC", "Paint");
