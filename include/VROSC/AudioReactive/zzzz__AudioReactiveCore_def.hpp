#pragma once
// IWYU pragma private; include "VROSC/AudioReactive/AudioReactiveCore.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(AudioReactiveCore)
namespace GlobalNamespace {
class Environment;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class Action;
}
namespace VROSC::AudioReactive {
class AudioReactiveCore_BufferValue;
}
namespace VROSC {
class MinMaxFloat;
}
// Forward declare root types
namespace VROSC::AudioReactive {
class AudioReactiveCore;
}
namespace VROSC::AudioReactive {
class AudioReactiveCore_BufferValue;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::AudioReactive::AudioReactiveCore);
MARK_REF_PTR_T(::VROSC::AudioReactive::AudioReactiveCore_BufferValue);
// Dependencies System.Object
namespace VROSC::AudioReactive {
// Is value type: false
// CS Name: VROSC.AudioReactive.AudioReactiveCore/BufferValue
class CORDL_TYPE AudioReactiveCore_BufferValue : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Buffer, put=set_Buffer)) float_t  Buffer;

 __declspec(property(get=get_Interpolated, put=set_Interpolated)) float_t  Interpolated;

/// @brief Field OnBeat, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnBeat, put=__cordl_internal_set_OnBeat)) ::System::Action*  OnBeat;

 __declspec(property(get=get_Value, put=set_Value)) float_t  Value;

/// @brief Field <Buffer>k__BackingField, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get__Buffer_k__BackingField, put=__cordl_internal_set__Buffer_k__BackingField)) float_t  _Buffer_k__BackingField;

/// @brief Field <Interpolated>k__BackingField, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get__Interpolated_k__BackingField, put=__cordl_internal_set__Interpolated_k__BackingField)) float_t  _Interpolated_k__BackingField;

/// @brief Field <Value>k__BackingField, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get__Value_k__BackingField, put=__cordl_internal_set__Value_k__BackingField)) float_t  _Value_k__BackingField;

/// @brief Field _coolDown, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__coolDown, put=__cordl_internal_set__coolDown)) float_t  _coolDown;

/// @brief Field _interval, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__interval, put=__cordl_internal_set__interval)) ::VROSC::MinMaxFloat*  _interval;

/// @brief Field _peak, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get__peak, put=__cordl_internal_set__peak)) float_t  _peak;

static inline ::VROSC::AudioReactive::AudioReactiveCore_BufferValue* New_ctor() ;

/// @brief Method Set, addr 0x17d8680, size 0x70, virtual false, abstract: false, final false
inline void Set(float_t  min, float_t  max) ;

/// @brief Method Update, addr 0x17d8844, size 0x15c, virtual false, abstract: false, final false
inline void Update(float_t  modifier, float_t  fallSpeed, float_t  coolDownTime) ;

constexpr ::System::Action* const& __cordl_internal_get_OnBeat() const;

constexpr ::System::Action*& __cordl_internal_get_OnBeat() ;

constexpr float_t const& __cordl_internal_get__Buffer_k__BackingField() const;

constexpr float_t& __cordl_internal_get__Buffer_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__Interpolated_k__BackingField() const;

constexpr float_t& __cordl_internal_get__Interpolated_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__Value_k__BackingField() const;

constexpr float_t& __cordl_internal_get__Value_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__coolDown() const;

constexpr float_t& __cordl_internal_get__coolDown() ;

constexpr ::VROSC::MinMaxFloat* const& __cordl_internal_get__interval() const;

constexpr ::VROSC::MinMaxFloat*& __cordl_internal_get__interval() ;

constexpr float_t const& __cordl_internal_get__peak() const;

constexpr float_t& __cordl_internal_get__peak() ;

constexpr void __cordl_internal_set_OnBeat(::System::Action*  value) ;

constexpr void __cordl_internal_set__Buffer_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__Interpolated_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__Value_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__coolDown(float_t  value) ;

constexpr void __cordl_internal_set__interval(::VROSC::MinMaxFloat*  value) ;

constexpr void __cordl_internal_set__peak(float_t  value) ;

/// @brief Method .ctor, addr 0x17d8ccc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Buffer, addr 0x17d8d04, size 0x8, virtual false, abstract: false, final false
inline float_t get_Buffer() ;

/// @brief Method get_Interpolated, addr 0x17d8d14, size 0x8, virtual false, abstract: false, final false
inline float_t get_Interpolated() ;

/// @brief Method get_Value, addr 0x17d8cf4, size 0x8, virtual false, abstract: false, final false
inline float_t get_Value() ;

/// @brief Method set_Buffer, addr 0x17d8cfc, size 0x8, virtual false, abstract: false, final false
inline void set_Buffer(float_t  value) ;

/// @brief Method set_Interpolated, addr 0x17d8d0c, size 0x8, virtual false, abstract: false, final false
inline void set_Interpolated(float_t  value) ;

/// @brief Method set_Value, addr 0x17d8cec, size 0x8, virtual false, abstract: false, final false
inline void set_Value(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AudioReactiveCore_BufferValue() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AudioReactiveCore_BufferValue", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AudioReactiveCore_BufferValue(AudioReactiveCore_BufferValue && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AudioReactiveCore_BufferValue", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AudioReactiveCore_BufferValue(AudioReactiveCore_BufferValue const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1536};

/// @brief Field <Value>k__BackingField, offset: 0x10, size: 0x4, def value: None
 float_t  ____Value_k__BackingField;

/// @brief Field <Buffer>k__BackingField, offset: 0x14, size: 0x4, def value: None
 float_t  ____Buffer_k__BackingField;

/// @brief Field <Interpolated>k__BackingField, offset: 0x18, size: 0x4, def value: None
 float_t  ____Interpolated_k__BackingField;

/// @brief Field _peak, offset: 0x1c, size: 0x4, def value: None
 float_t  ____peak;

/// @brief Field _interval, offset: 0x20, size: 0x8, def value: None
 ::VROSC::MinMaxFloat*  ____interval;

/// @brief Field OnBeat, offset: 0x28, size: 0x8, def value: None
 ::System::Action*  ___OnBeat;

/// @brief Field _coolDown, offset: 0x30, size: 0x4, def value: None
 float_t  ____coolDown;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::AudioReactive::AudioReactiveCore_BufferValue, ____Value_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::AudioReactive::AudioReactiveCore_BufferValue, ____Buffer_k__BackingField) == 0x14, "Offset mismatch!");

static_assert(offsetof(::VROSC::AudioReactive::AudioReactiveCore_BufferValue, ____Interpolated_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::AudioReactive::AudioReactiveCore_BufferValue, ____peak) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::VROSC::AudioReactive::AudioReactiveCore_BufferValue, ____interval) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::AudioReactive::AudioReactiveCore_BufferValue, ___OnBeat) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::AudioReactive::AudioReactiveCore_BufferValue, ____coolDown) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::AudioReactive::AudioReactiveCore_BufferValue, 0x38>, "Size mismatch!");

} // namespace end def VROSC::AudioReactive
// Dependencies UnityEngine.MonoBehaviour
namespace VROSC::AudioReactive {
// Is value type: false
// CS Name: VROSC.AudioReactive.AudioReactiveCore
class CORDL_TYPE AudioReactiveCore : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using BufferValue = ::VROSC::AudioReactive::AudioReactiveCore_BufferValue;

/// @brief Field OnBeat, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnBeat, put=setStaticF_OnBeat)) ::System::Action_1<int32_t>*  OnBeat;

/// @brief Field _bass, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__bass, put=__cordl_internal_set__bass)) ::VROSC::AudioReactive::AudioReactiveCore_BufferValue*  _bass;

/// @brief Field _coolDown, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get__coolDown, put=__cordl_internal_set__coolDown)) float_t  _coolDown;

/// @brief Field _environmentSettings, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__environmentSettings, put=__cordl_internal_set__environmentSettings)) ::UnityW<::GlobalNamespace::Environment>  _environmentSettings;

/// @brief Field _fallSpeed, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__fallSpeed, put=__cordl_internal_set__fallSpeed)) float_t  _fallSpeed;

/// @brief Field _mid, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__mid, put=__cordl_internal_set__mid)) ::VROSC::AudioReactive::AudioReactiveCore_BufferValue*  _mid;

/// @brief Field _top, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__top, put=__cordl_internal_set__top)) ::VROSC::AudioReactive::AudioReactiveCore_BufferValue*  _top;

/// @brief Method Awake, addr 0x17d82f8, size 0x388, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::VROSC::AudioReactive::AudioReactiveCore* New_ctor() ;

/// @brief Method OnDestroy, addr 0x17d8a80, size 0x1bc, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method SendBeat, addr 0x17d89a8, size 0x6c, virtual false, abstract: false, final false
inline void SendBeat(int32_t  beat) ;

/// @brief Method SendPlayermadeSound, addr 0x17d8a14, size 0x6c, virtual false, abstract: false, final false
inline void SendPlayermadeSound(int32_t  beat) ;

/// @brief Method SetCurrentEnvironment, addr 0x17d89a0, size 0x8, virtual false, abstract: false, final false
inline void SetCurrentEnvironment(::GlobalNamespace::Environment*  environmentSettings) ;

/// @brief Method Update, addr 0x17d86f0, size 0x154, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method <Awake>b__8_0, addr 0x17d8cd4, size 0x8, virtual false, abstract: false, final false
inline void _Awake_b__8_0() ;

/// @brief Method <Awake>b__8_1, addr 0x17d8cdc, size 0x8, virtual false, abstract: false, final false
inline void _Awake_b__8_1() ;

/// @brief Method <Awake>b__8_2, addr 0x17d8ce4, size 0x8, virtual false, abstract: false, final false
inline void _Awake_b__8_2() ;

constexpr ::VROSC::AudioReactive::AudioReactiveCore_BufferValue* const& __cordl_internal_get__bass() const;

constexpr ::VROSC::AudioReactive::AudioReactiveCore_BufferValue*& __cordl_internal_get__bass() ;

constexpr float_t const& __cordl_internal_get__coolDown() const;

constexpr float_t& __cordl_internal_get__coolDown() ;

constexpr ::UnityW<::GlobalNamespace::Environment> const& __cordl_internal_get__environmentSettings() const;

constexpr ::UnityW<::GlobalNamespace::Environment>& __cordl_internal_get__environmentSettings() ;

constexpr float_t const& __cordl_internal_get__fallSpeed() const;

constexpr float_t& __cordl_internal_get__fallSpeed() ;

constexpr ::VROSC::AudioReactive::AudioReactiveCore_BufferValue* const& __cordl_internal_get__mid() const;

constexpr ::VROSC::AudioReactive::AudioReactiveCore_BufferValue*& __cordl_internal_get__mid() ;

constexpr ::VROSC::AudioReactive::AudioReactiveCore_BufferValue* const& __cordl_internal_get__top() const;

constexpr ::VROSC::AudioReactive::AudioReactiveCore_BufferValue*& __cordl_internal_get__top() ;

constexpr void __cordl_internal_set__bass(::VROSC::AudioReactive::AudioReactiveCore_BufferValue*  value) ;

constexpr void __cordl_internal_set__coolDown(float_t  value) ;

constexpr void __cordl_internal_set__environmentSettings(::UnityW<::GlobalNamespace::Environment>  value) ;

constexpr void __cordl_internal_set__fallSpeed(float_t  value) ;

constexpr void __cordl_internal_set__mid(::VROSC::AudioReactive::AudioReactiveCore_BufferValue*  value) ;

constexpr void __cordl_internal_set__top(::VROSC::AudioReactive::AudioReactiveCore_BufferValue*  value) ;

/// @brief Method .ctor, addr 0x17d8c3c, size 0x90, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Action_1<int32_t>* getStaticF_OnBeat() ;

static inline void setStaticF_OnBeat(::System::Action_1<int32_t>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AudioReactiveCore() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AudioReactiveCore", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AudioReactiveCore(AudioReactiveCore && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AudioReactiveCore", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AudioReactiveCore(AudioReactiveCore const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1537};

/// @brief Field _fallSpeed, offset: 0x20, size: 0x4, def value: None
 float_t  ____fallSpeed;

/// @brief Field _coolDown, offset: 0x24, size: 0x4, def value: None
 float_t  ____coolDown;

/// @brief Field _environmentSettings, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::Environment>  ____environmentSettings;

/// @brief Field _bass, offset: 0x30, size: 0x8, def value: None
 ::VROSC::AudioReactive::AudioReactiveCore_BufferValue*  ____bass;

/// @brief Field _mid, offset: 0x38, size: 0x8, def value: None
 ::VROSC::AudioReactive::AudioReactiveCore_BufferValue*  ____mid;

/// @brief Field _top, offset: 0x40, size: 0x8, def value: None
 ::VROSC::AudioReactive::AudioReactiveCore_BufferValue*  ____top;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::AudioReactive::AudioReactiveCore, ____fallSpeed) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::AudioReactive::AudioReactiveCore, ____coolDown) == 0x24, "Offset mismatch!");

static_assert(offsetof(::VROSC::AudioReactive::AudioReactiveCore, ____environmentSettings) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::AudioReactive::AudioReactiveCore, ____bass) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::AudioReactive::AudioReactiveCore, ____mid) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::AudioReactive::AudioReactiveCore, ____top) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::AudioReactive::AudioReactiveCore, 0x48>, "Size mismatch!");

} // namespace end def VROSC::AudioReactive
NEED_NO_BOX(::VROSC::AudioReactive::AudioReactiveCore);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::AudioReactive::AudioReactiveCore*, "VROSC.AudioReactive", "AudioReactiveCore");
NEED_NO_BOX(::VROSC::AudioReactive::AudioReactiveCore_BufferValue);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::AudioReactive::AudioReactiveCore_BufferValue*, "VROSC.AudioReactive", "AudioReactiveCore/BufferValue");
