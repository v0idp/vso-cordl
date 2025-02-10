#pragma once
// IWYU pragma private; include "VROSC/AudioReactive/GlobalShiftColorData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GlobalShiftColorData)
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class MaterialPropertyBlock;
}
namespace VROSC::AudioReactive {
class GlobalColorEffectData;
}
// Forward declare root types
namespace VROSC::AudioReactive {
class GlobalShiftColorData;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::AudioReactive::GlobalShiftColorData);
// Dependencies System.Object
namespace VROSC::AudioReactive {
// Is value type: false
// CS Name: VROSC.AudioReactive.GlobalShiftColorData
class CORDL_TYPE GlobalShiftColorData : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Color)) ::UnityEngine::Color  Color;

/// @brief Field OnColor1Change, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnColor1Change, put=setStaticF_OnColor1Change)) ::System::Action_2<::UnityEngine::Color,float_t>*  OnColor1Change;

/// @brief Field OnColor2Change, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnColor2Change, put=setStaticF_OnColor2Change)) ::System::Action_2<::UnityEngine::Color,float_t>*  OnColor2Change;

/// @brief Field OnColor3Change, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnColor3Change, put=setStaticF_OnColor3Change)) ::System::Action_2<::UnityEngine::Color,float_t>*  OnColor3Change;

/// @brief Field OnColor4Change, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnColor4Change, put=setStaticF_OnColor4Change)) ::System::Action_2<::UnityEngine::Color,float_t>*  OnColor4Change;

/// @brief Field _block, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__block, put=__cordl_internal_set__block)) ::UnityEngine::MaterialPropertyBlock*  _block;

/// @brief Field _channel, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get__channel, put=__cordl_internal_set__channel)) int32_t  _channel;

/// @brief Field _currentHue, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__currentHue, put=__cordl_internal_set__currentHue)) float_t  _currentHue;

/// @brief Field _currentSaturation, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get__currentSaturation, put=__cordl_internal_set__currentSaturation)) float_t  _currentSaturation;

/// @brief Field _currentValue, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__currentValue, put=__cordl_internal_set__currentValue)) float_t  _currentValue;

/// @brief Field _data, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__data, put=__cordl_internal_set__data)) ::UnityW<::VROSC::AudioReactive::GlobalColorEffectData>  _data;

/// @brief Field _intensityShift, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__intensityShift, put=__cordl_internal_set__intensityShift)) float_t  _intensityShift;

/// @brief Field _saturationShift, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get__saturationShift, put=__cordl_internal_set__saturationShift)) float_t  _saturationShift;

/// @brief Field _shift, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get__shift, put=__cordl_internal_set__shift)) float_t  _shift;

/// @brief Field _startSaturation, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get__startSaturation, put=__cordl_internal_set__startSaturation)) float_t  _startSaturation;

/// @brief Method GetColor, addr 0x17dae54, size 0x48, virtual false, abstract: false, final false
inline ::UnityEngine::Color GetColor() ;

/// @brief Method GetGlobalShaderString, addr 0x17daeac, size 0x84, virtual false, abstract: false, final false
static inline ::StringW GetGlobalShaderString(int32_t  channel) ;

static inline ::VROSC::AudioReactive::GlobalShiftColorData* New_ctor(::VROSC::AudioReactive::GlobalColorEffectData*  data, int32_t  channel) ;

/// @brief Method SendActions, addr 0x17daf30, size 0x104, virtual false, abstract: false, final false
static inline void SendActions(::UnityEngine::Color  color, float_t  multiplier, int32_t  channel) ;

/// @brief Method SetColor, addr 0x17d9ee4, size 0x30, virtual false, abstract: false, final false
inline void SetColor(::UnityEngine::Color  color) ;

/// @brief Method SetSaturationShift, addr 0x17dae9c, size 0x8, virtual false, abstract: false, final false
inline void SetSaturationShift(float_t  saturationShift) ;

/// @brief Method SetValueShift, addr 0x17daea4, size 0x8, virtual false, abstract: false, final false
inline void SetValueShift(float_t  value) ;

/// @brief Method ShiftShade, addr 0x17d9e54, size 0x78, virtual false, abstract: false, final false
inline void ShiftShade() ;

/// @brief Method ShiftShadeSpecific, addr 0x17da12c, size 0xc8, virtual false, abstract: false, final false
inline void ShiftShadeSpecific(float_t  shift) ;

/// @brief Method UpdateGlobalColor, addr 0x17d9ecc, size 0x18, virtual false, abstract: false, final false
inline void UpdateGlobalColor() ;

/// @brief Method UpdateGlobalColor, addr 0x17da514, size 0xa8, virtual false, abstract: false, final false
static inline void UpdateGlobalColor(::UnityEngine::Color  color, int32_t  channel) ;

constexpr ::UnityEngine::MaterialPropertyBlock* const& __cordl_internal_get__block() const;

constexpr ::UnityEngine::MaterialPropertyBlock*& __cordl_internal_get__block() ;

constexpr int32_t const& __cordl_internal_get__channel() const;

constexpr int32_t& __cordl_internal_get__channel() ;

constexpr float_t const& __cordl_internal_get__currentHue() const;

constexpr float_t& __cordl_internal_get__currentHue() ;

constexpr float_t const& __cordl_internal_get__currentSaturation() const;

constexpr float_t& __cordl_internal_get__currentSaturation() ;

constexpr float_t const& __cordl_internal_get__currentValue() const;

constexpr float_t& __cordl_internal_get__currentValue() ;

constexpr ::UnityW<::VROSC::AudioReactive::GlobalColorEffectData> const& __cordl_internal_get__data() const;

constexpr ::UnityW<::VROSC::AudioReactive::GlobalColorEffectData>& __cordl_internal_get__data() ;

constexpr float_t const& __cordl_internal_get__intensityShift() const;

constexpr float_t& __cordl_internal_get__intensityShift() ;

constexpr float_t const& __cordl_internal_get__saturationShift() const;

constexpr float_t& __cordl_internal_get__saturationShift() ;

constexpr float_t const& __cordl_internal_get__shift() const;

constexpr float_t& __cordl_internal_get__shift() ;

constexpr float_t const& __cordl_internal_get__startSaturation() const;

constexpr float_t& __cordl_internal_get__startSaturation() ;

constexpr void __cordl_internal_set__block(::UnityEngine::MaterialPropertyBlock*  value) ;

constexpr void __cordl_internal_set__channel(int32_t  value) ;

constexpr void __cordl_internal_set__currentHue(float_t  value) ;

constexpr void __cordl_internal_set__currentSaturation(float_t  value) ;

constexpr void __cordl_internal_set__currentValue(float_t  value) ;

constexpr void __cordl_internal_set__data(::UnityW<::VROSC::AudioReactive::GlobalColorEffectData>  value) ;

constexpr void __cordl_internal_set__intensityShift(float_t  value) ;

constexpr void __cordl_internal_set__saturationShift(float_t  value) ;

constexpr void __cordl_internal_set__shift(float_t  value) ;

constexpr void __cordl_internal_set__startSaturation(float_t  value) ;

/// @brief Method .ctor, addr 0x17d9ba8, size 0x84, virtual false, abstract: false, final false
inline void _ctor(::VROSC::AudioReactive::GlobalColorEffectData*  data, int32_t  channel) ;

static inline ::System::Action_2<::UnityEngine::Color,float_t>* getStaticF_OnColor1Change() ;

static inline ::System::Action_2<::UnityEngine::Color,float_t>* getStaticF_OnColor2Change() ;

static inline ::System::Action_2<::UnityEngine::Color,float_t>* getStaticF_OnColor3Change() ;

static inline ::System::Action_2<::UnityEngine::Color,float_t>* getStaticF_OnColor4Change() ;

/// @brief Method get_Color, addr 0x17dae50, size 0x4, virtual false, abstract: false, final false
inline ::UnityEngine::Color get_Color() ;

static inline void setStaticF_OnColor1Change(::System::Action_2<::UnityEngine::Color,float_t>*  value) ;

static inline void setStaticF_OnColor2Change(::System::Action_2<::UnityEngine::Color,float_t>*  value) ;

static inline void setStaticF_OnColor3Change(::System::Action_2<::UnityEngine::Color,float_t>*  value) ;

static inline void setStaticF_OnColor4Change(::System::Action_2<::UnityEngine::Color,float_t>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GlobalShiftColorData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GlobalShiftColorData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GlobalShiftColorData(GlobalShiftColorData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GlobalShiftColorData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GlobalShiftColorData(GlobalShiftColorData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1566};

/// @brief Field _data, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::VROSC::AudioReactive::GlobalColorEffectData>  ____data;

/// @brief Field _channel, offset: 0x18, size: 0x4, def value: None
 int32_t  ____channel;

/// @brief Field _shift, offset: 0x1c, size: 0x4, def value: None
 float_t  ____shift;

/// @brief Field _currentHue, offset: 0x20, size: 0x4, def value: None
 float_t  ____currentHue;

/// @brief Field _currentSaturation, offset: 0x24, size: 0x4, def value: None
 float_t  ____currentSaturation;

/// @brief Field _currentValue, offset: 0x28, size: 0x4, def value: None
 float_t  ____currentValue;

/// @brief Field _startSaturation, offset: 0x2c, size: 0x4, def value: None
 float_t  ____startSaturation;

/// @brief Field _intensityShift, offset: 0x30, size: 0x4, def value: None
 float_t  ____intensityShift;

/// @brief Field _saturationShift, offset: 0x34, size: 0x4, def value: None
 float_t  ____saturationShift;

/// @brief Field _block, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::MaterialPropertyBlock*  ____block;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::AudioReactive::GlobalShiftColorData, ____data) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::AudioReactive::GlobalShiftColorData, ____channel) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::AudioReactive::GlobalShiftColorData, ____shift) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::VROSC::AudioReactive::GlobalShiftColorData, ____currentHue) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::AudioReactive::GlobalShiftColorData, ____currentSaturation) == 0x24, "Offset mismatch!");

static_assert(offsetof(::VROSC::AudioReactive::GlobalShiftColorData, ____currentValue) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::AudioReactive::GlobalShiftColorData, ____startSaturation) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::VROSC::AudioReactive::GlobalShiftColorData, ____intensityShift) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::AudioReactive::GlobalShiftColorData, ____saturationShift) == 0x34, "Offset mismatch!");

static_assert(offsetof(::VROSC::AudioReactive::GlobalShiftColorData, ____block) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::AudioReactive::GlobalShiftColorData, 0x40>, "Size mismatch!");

} // namespace end def VROSC::AudioReactive
NEED_NO_BOX(::VROSC::AudioReactive::GlobalShiftColorData);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::AudioReactive::GlobalShiftColorData*, "VROSC.AudioReactive", "GlobalShiftColorData");
