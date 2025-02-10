#pragma once
// IWYU pragma private; include "VROSC/AudioReactive/ShiftColorData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ShiftColorData)
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class MaterialPropertyBlock;
}
namespace UnityEngine {
class Renderer;
}
namespace VROSC::AudioReactive {
class ShiftColorEffectData;
}
// Forward declare root types
namespace VROSC::AudioReactive {
class ShiftColorData;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::AudioReactive::ShiftColorData);
// Dependencies System.Object
namespace VROSC::AudioReactive {
// Is value type: false
// CS Name: VROSC.AudioReactive.ShiftColorData
class CORDL_TYPE ShiftColorData : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Color)) ::UnityEngine::Color  Color;

/// @brief Field _currentHue, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get__currentHue, put=__cordl_internal_set__currentHue)) float_t  _currentHue;

/// @brief Field _currentSaturation, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__currentSaturation, put=__cordl_internal_set__currentSaturation)) float_t  _currentSaturation;

/// @brief Field _currentValue, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get__currentValue, put=__cordl_internal_set__currentValue)) float_t  _currentValue;

/// @brief Field _data, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__data, put=__cordl_internal_set__data)) ::UnityW<::VROSC::AudioReactive::ShiftColorEffectData>  _data;

/// @brief Field _intensityShift, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get__intensityShift, put=__cordl_internal_set__intensityShift)) float_t  _intensityShift;

/// @brief Field _materialBlock, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__materialBlock, put=__cordl_internal_set__materialBlock)) ::UnityEngine::MaterialPropertyBlock*  _materialBlock;

/// @brief Field _renderer, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__renderer, put=__cordl_internal_set__renderer)) ::UnityW<::UnityEngine::Renderer>  _renderer;

/// @brief Field _saturationShift, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get__saturationShift, put=__cordl_internal_set__saturationShift)) float_t  _saturationShift;

/// @brief Field _shift, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__shift, put=__cordl_internal_set__shift)) float_t  _shift;

/// @brief Field _startSaturation, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get__startSaturation, put=__cordl_internal_set__startSaturation)) float_t  _startSaturation;

/// @brief Method GetColor, addr 0x17d6088, size 0x48, virtual false, abstract: false, final false
inline ::UnityEngine::Color GetColor() ;

static inline ::VROSC::AudioReactive::ShiftColorData* New_ctor(::UnityEngine::Renderer*  renderer, ::VROSC::AudioReactive::ShiftColorEffectData*  data) ;

/// @brief Method SetColorOnRenderer, addr 0x17d5b34, size 0x74, virtual false, abstract: false, final false
inline void SetColorOnRenderer() ;

/// @brief Method SetRandomColor, addr 0x17d5f74, size 0x78, virtual false, abstract: false, final false
inline void SetRandomColor() ;

/// @brief Method SetSaturationShift, addr 0x17d60d0, size 0x8, virtual false, abstract: false, final false
inline void SetSaturationShift(float_t  saturationShift) ;

/// @brief Method SetValueShift, addr 0x17d60d8, size 0x8, virtual false, abstract: false, final false
inline void SetValueShift(float_t  value) ;

/// @brief Method ShiftShade, addr 0x17d5ad0, size 0x64, virtual false, abstract: false, final false
inline void ShiftShade(float_t  amount) ;

constexpr float_t const& __cordl_internal_get__currentHue() const;

constexpr float_t& __cordl_internal_get__currentHue() ;

constexpr float_t const& __cordl_internal_get__currentSaturation() const;

constexpr float_t& __cordl_internal_get__currentSaturation() ;

constexpr float_t const& __cordl_internal_get__currentValue() const;

constexpr float_t& __cordl_internal_get__currentValue() ;

constexpr ::UnityW<::VROSC::AudioReactive::ShiftColorEffectData> const& __cordl_internal_get__data() const;

constexpr ::UnityW<::VROSC::AudioReactive::ShiftColorEffectData>& __cordl_internal_get__data() ;

constexpr float_t const& __cordl_internal_get__intensityShift() const;

constexpr float_t& __cordl_internal_get__intensityShift() ;

constexpr ::UnityEngine::MaterialPropertyBlock* const& __cordl_internal_get__materialBlock() const;

constexpr ::UnityEngine::MaterialPropertyBlock*& __cordl_internal_get__materialBlock() ;

constexpr ::UnityW<::UnityEngine::Renderer> const& __cordl_internal_get__renderer() const;

constexpr ::UnityW<::UnityEngine::Renderer>& __cordl_internal_get__renderer() ;

constexpr float_t const& __cordl_internal_get__saturationShift() const;

constexpr float_t& __cordl_internal_get__saturationShift() ;

constexpr float_t const& __cordl_internal_get__shift() const;

constexpr float_t& __cordl_internal_get__shift() ;

constexpr float_t const& __cordl_internal_get__startSaturation() const;

constexpr float_t& __cordl_internal_get__startSaturation() ;

constexpr void __cordl_internal_set__currentHue(float_t  value) ;

constexpr void __cordl_internal_set__currentSaturation(float_t  value) ;

constexpr void __cordl_internal_set__currentValue(float_t  value) ;

constexpr void __cordl_internal_set__data(::UnityW<::VROSC::AudioReactive::ShiftColorEffectData>  value) ;

constexpr void __cordl_internal_set__intensityShift(float_t  value) ;

constexpr void __cordl_internal_set__materialBlock(::UnityEngine::MaterialPropertyBlock*  value) ;

constexpr void __cordl_internal_set__renderer(::UnityW<::UnityEngine::Renderer>  value) ;

constexpr void __cordl_internal_set__saturationShift(float_t  value) ;

constexpr void __cordl_internal_set__shift(float_t  value) ;

constexpr void __cordl_internal_set__startSaturation(float_t  value) ;

/// @brief Method .ctor, addr 0x17d5994, size 0xa4, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Renderer*  renderer, ::VROSC::AudioReactive::ShiftColorEffectData*  data) ;

/// @brief Method get_Color, addr 0x17d6084, size 0x4, virtual false, abstract: false, final false
inline ::UnityEngine::Color get_Color() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ShiftColorData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ShiftColorData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ShiftColorData(ShiftColorData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ShiftColorData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ShiftColorData(ShiftColorData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1511};

/// @brief Field _renderer, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Renderer>  ____renderer;

/// @brief Field _materialBlock, offset: 0x18, size: 0x8, def value: None
 ::UnityEngine::MaterialPropertyBlock*  ____materialBlock;

/// @brief Field _data, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::VROSC::AudioReactive::ShiftColorEffectData>  ____data;

/// @brief Field _shift, offset: 0x28, size: 0x4, def value: None
 float_t  ____shift;

/// @brief Field _currentHue, offset: 0x2c, size: 0x4, def value: None
 float_t  ____currentHue;

/// @brief Field _currentSaturation, offset: 0x30, size: 0x4, def value: None
 float_t  ____currentSaturation;

/// @brief Field _currentValue, offset: 0x34, size: 0x4, def value: None
 float_t  ____currentValue;

/// @brief Field _startSaturation, offset: 0x38, size: 0x4, def value: None
 float_t  ____startSaturation;

/// @brief Field _intensityShift, offset: 0x3c, size: 0x4, def value: None
 float_t  ____intensityShift;

/// @brief Field _saturationShift, offset: 0x40, size: 0x4, def value: None
 float_t  ____saturationShift;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::AudioReactive::ShiftColorData, ____renderer) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::AudioReactive::ShiftColorData, ____materialBlock) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::AudioReactive::ShiftColorData, ____data) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::AudioReactive::ShiftColorData, ____shift) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::AudioReactive::ShiftColorData, ____currentHue) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::VROSC::AudioReactive::ShiftColorData, ____currentSaturation) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::AudioReactive::ShiftColorData, ____currentValue) == 0x34, "Offset mismatch!");

static_assert(offsetof(::VROSC::AudioReactive::ShiftColorData, ____startSaturation) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::AudioReactive::ShiftColorData, ____intensityShift) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::VROSC::AudioReactive::ShiftColorData, ____saturationShift) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::AudioReactive::ShiftColorData, 0x48>, "Size mismatch!");

} // namespace end def VROSC::AudioReactive
NEED_NO_BOX(::VROSC::AudioReactive::ShiftColorData);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::AudioReactive::ShiftColorData*, "VROSC.AudioReactive", "ShiftColorData");
