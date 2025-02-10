#pragma once
// IWYU pragma private; include "VROSC/InternalSynthesizer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "VROSC/zzzz__SoundSource_def.hpp"
#include "VROSC/zzzz__WidgetSettings_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InternalSynthesizer)
namespace AudioHelm {
class AudioHelmClock;
}
namespace AudioHelm {
struct Param;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class Object;
}
namespace VROSC {
class AudioHelmInstrumentWrapper;
}
namespace VROSC {
struct HandType;
}
namespace VROSC {
class HelmWrapper;
}
namespace VROSC {
struct InternalSynthesizer__Setup_d__13;
}
namespace VROSC {
class PatchSettings;
}
namespace VROSC {
struct SoundSource;
}
namespace VROSC {
class VirtuosoSampler;
}
namespace VROSC {
struct WidgetSettings_Identifier;
}
// Forward declare root types
namespace VROSC {
class InternalSynthesizer;
}
namespace VROSC {
struct InternalSynthesizer__Setup_d__13;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::InternalSynthesizer);
MARK_VAL_T(::VROSC::InternalSynthesizer__Setup_d__13);
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter
namespace VROSC {
// Is value type: true
// CS Name: VROSC.InternalSynthesizer/<Setup>d__13
struct CORDL_TYPE InternalSynthesizer__Setup_d__13 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x17cb1ec, size 0x360, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x17cb54c, size 0x68, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr InternalSynthesizer__Setup_d__13() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::VROSC::InternalSynthesizer>", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
constexpr InternalSynthesizer__Setup_d__13(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::UnityW<::VROSC::InternalSynthesizer>  __4__this, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{285};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::VROSC::InternalSynthesizer>  __4__this;

/// @brief Field <>u__1, offset: 0x28, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::VROSC::InternalSynthesizer__Setup_d__13, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::VROSC::InternalSynthesizer__Setup_d__13, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::VROSC::InternalSynthesizer__Setup_d__13, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::InternalSynthesizer__Setup_d__13, __u__1) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::InternalSynthesizer__Setup_d__13, 0x30>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies UnityEngine.MonoBehaviour, VROSC.SoundSource, VROSC.WidgetSettings::Identifier
namespace VROSC {
// Is value type: false
// CS Name: VROSC.InternalSynthesizer
class CORDL_TYPE InternalSynthesizer : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _Setup_d__13 = ::VROSC::InternalSynthesizer__Setup_d__13;

/// @brief Field OnActivePatchChanged, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnActivePatchChanged, put=setStaticF_OnActivePatchChanged)) ::System::Action_1<::VROSC::PatchSettings*>*  OnActivePatchChanged;

/// @brief Field _activeHelm, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__activeHelm, put=__cordl_internal_set__activeHelm)) ::UnityW<::VROSC::HelmWrapper>  _activeHelm;

/// @brief Field _audioHelmClock, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__audioHelmClock, put=__cordl_internal_set__audioHelmClock)) ::UnityW<::AudioHelm::AudioHelmClock>  _audioHelmClock;

/// @brief Field _currentInstrumentId, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get__currentInstrumentId, put=__cordl_internal_set__currentInstrumentId)) ::VROSC::WidgetSettings_Identifier  _currentInstrumentId;

/// @brief Field _currentSoundSource, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get__currentSoundSource, put=__cordl_internal_set__currentSoundSource)) ::VROSC::SoundSource  _currentSoundSource;

/// @brief Field _helmOne, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__helmOne, put=__cordl_internal_set__helmOne)) ::UnityW<::VROSC::HelmWrapper>  _helmOne;

/// @brief Field _helmTwo, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__helmTwo, put=__cordl_internal_set__helmTwo)) ::UnityW<::VROSC::HelmWrapper>  _helmTwo;

/// @brief Field _helms, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__helms, put=__cordl_internal_set__helms)) ::System::Collections::Generic::List_1<::UnityW<::VROSC::HelmWrapper>>*  _helms;

/// @brief Field _isHelmDirty, offset 0x59, size 0x1 
 __declspec(property(get=__cordl_internal_get__isHelmDirty, put=__cordl_internal_set__isHelmDirty)) bool  _isHelmDirty;

/// @brief Field _patchSet, offset 0x58, size 0x1 
 __declspec(property(get=__cordl_internal_get__patchSet, put=__cordl_internal_set__patchSet)) bool  _patchSet;

/// @brief Field _reloadHelmRefreshRate, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get__reloadHelmRefreshRate, put=__cordl_internal_set__reloadHelmRefreshRate)) float_t  _reloadHelmRefreshRate;

/// @brief Field _reloadHelmTimer, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get__reloadHelmTimer, put=__cordl_internal_set__reloadHelmTimer)) float_t  _reloadHelmTimer;

/// @brief Field _sampler, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__sampler, put=__cordl_internal_set__sampler)) ::UnityW<::VROSC::VirtuosoSampler>  _sampler;

/// @brief Method AllNotesOff, addr 0x17cad30, size 0x4c, virtual false, abstract: false, final false
inline void AllNotesOff() ;

/// @brief Method AllNotesOff, addr 0x17cad7c, size 0x1f8, virtual false, abstract: false, final false
inline void AllNotesOff(::System::Object*  patch) ;

/// @brief Method GetCurrentInstrumentName, addr 0x17cb048, size 0x5c, virtual false, abstract: false, final false
inline ::StringW GetCurrentInstrumentName() ;

/// @brief Method GetCurrentPatchName, addr 0x17cb0a4, size 0xb8, virtual false, abstract: false, final false
inline ::StringW GetCurrentPatchName() ;

/// @brief Method GetCurrentSoundSource, addr 0x17cb15c, size 0x8, virtual false, abstract: false, final false
inline ::VROSC::SoundSource GetCurrentSoundSource() ;

/// @brief Method GetHelmOrSamplerWrapper, addr 0x17c92b0, size 0x378, virtual false, abstract: false, final false
inline ::UnityW<::VROSC::AudioHelmInstrumentWrapper> GetHelmOrSamplerWrapper(::VROSC::PatchSettings*  patchSettings, ::VROSC::HandType  handType) ;

static inline ::VROSC::InternalSynthesizer* New_ctor() ;

/// @brief Method PlayNote, addr 0x17c9240, size 0x70, virtual false, abstract: false, final false
inline void PlayNote(::VROSC::WidgetSettings_Identifier  instrumentId, int32_t  note, float_t  velocity, ::VROSC::PatchSettings*  patchSettings, double_t  predictedDspTime, ::VROSC::HandType  handType, float_t  pitch, float_t  volume) ;

/// @brief Method ReloadHelm, addr 0x17c90f4, size 0x14c, virtual false, abstract: false, final false
inline void ReloadHelm() ;

/// @brief Method SetBPM, addr 0x17caff8, size 0x50, virtual false, abstract: false, final false
inline void SetBPM(double_t  bpm, bool  reset) ;

/// @brief Method SetHelmParameterPercent, addr 0x17c9b7c, size 0x1b8, virtual false, abstract: false, final false
inline void SetHelmParameterPercent(::VROSC::PatchSettings*  patchSettings, ::AudioHelm::Param  parameter, float_t  newValue, ::VROSC::HandType  handType) ;

/// @brief Method SetHelmParameterValue, addr 0x17c9d34, size 0x1c8, virtual false, abstract: false, final false
inline void SetHelmParameterValue(::VROSC::PatchSettings*  patchSettings, ::AudioHelm::Param  parameter, float_t  newValue, ::VROSC::HandType  handType) ;

/// @brief Method SetParameter, addr 0x17c965c, size 0x38c, virtual false, abstract: false, final false
inline void SetParameter(float_t  parameterValue, int32_t  parameterId, ::VROSC::PatchSettings*  patchSettings, ::VROSC::HandType  handType) ;

/// @brief Method SetPatch, addr 0x17caa3c, size 0x2f4, virtual false, abstract: false, final false
inline void SetPatch(::VROSC::HelmWrapper*  helmWrapper, ::VROSC::PatchSettings*  patchSettings) ;

/// @brief Method SetPatchToMicrophone, addr 0x17caf74, size 0x84, virtual false, abstract: false, final false
inline void SetPatchToMicrophone() ;

/// @brief Method SetPatchToModularDrums, addr 0x17ca9bc, size 0x80, virtual false, abstract: false, final false
inline void SetPatchToModularDrums() ;

/// @brief Method SetPitchBend, addr 0x17c99e8, size 0x194, virtual false, abstract: false, final false
inline void SetPitchBend(float_t  pitchBendValue, ::VROSC::PatchSettings*  patchSettings, ::VROSC::HandType  handType) ;

/// @brief Method Setup, addr 0x17c8fe8, size 0xc0, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* Setup() ;

/// @brief Method StopNote, addr 0x17c9628, size 0x34, virtual false, abstract: false, final false
inline void StopNote(int32_t  note, ::VROSC::PatchSettings*  patchSettings, ::VROSC::HandType  handType) ;

/// @brief Method Update, addr 0x17c90a8, size 0x4c, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::UnityW<::VROSC::HelmWrapper> const& __cordl_internal_get__activeHelm() const;

constexpr ::UnityW<::VROSC::HelmWrapper>& __cordl_internal_get__activeHelm() ;

constexpr ::UnityW<::AudioHelm::AudioHelmClock> const& __cordl_internal_get__audioHelmClock() const;

constexpr ::UnityW<::AudioHelm::AudioHelmClock>& __cordl_internal_get__audioHelmClock() ;

constexpr ::VROSC::WidgetSettings_Identifier const& __cordl_internal_get__currentInstrumentId() const;

constexpr ::VROSC::WidgetSettings_Identifier& __cordl_internal_get__currentInstrumentId() ;

constexpr ::VROSC::SoundSource const& __cordl_internal_get__currentSoundSource() const;

constexpr ::VROSC::SoundSource& __cordl_internal_get__currentSoundSource() ;

constexpr ::UnityW<::VROSC::HelmWrapper> const& __cordl_internal_get__helmOne() const;

constexpr ::UnityW<::VROSC::HelmWrapper>& __cordl_internal_get__helmOne() ;

constexpr ::UnityW<::VROSC::HelmWrapper> const& __cordl_internal_get__helmTwo() const;

constexpr ::UnityW<::VROSC::HelmWrapper>& __cordl_internal_get__helmTwo() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::VROSC::HelmWrapper>>* const& __cordl_internal_get__helms() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::VROSC::HelmWrapper>>*& __cordl_internal_get__helms() ;

constexpr bool const& __cordl_internal_get__isHelmDirty() const;

constexpr bool& __cordl_internal_get__isHelmDirty() ;

constexpr bool const& __cordl_internal_get__patchSet() const;

constexpr bool& __cordl_internal_get__patchSet() ;

constexpr float_t const& __cordl_internal_get__reloadHelmRefreshRate() const;

constexpr float_t& __cordl_internal_get__reloadHelmRefreshRate() ;

constexpr float_t const& __cordl_internal_get__reloadHelmTimer() const;

constexpr float_t& __cordl_internal_get__reloadHelmTimer() ;

constexpr ::UnityW<::VROSC::VirtuosoSampler> const& __cordl_internal_get__sampler() const;

constexpr ::UnityW<::VROSC::VirtuosoSampler>& __cordl_internal_get__sampler() ;

constexpr void __cordl_internal_set__activeHelm(::UnityW<::VROSC::HelmWrapper>  value) ;

constexpr void __cordl_internal_set__audioHelmClock(::UnityW<::AudioHelm::AudioHelmClock>  value) ;

constexpr void __cordl_internal_set__currentInstrumentId(::VROSC::WidgetSettings_Identifier  value) ;

constexpr void __cordl_internal_set__currentSoundSource(::VROSC::SoundSource  value) ;

constexpr void __cordl_internal_set__helmOne(::UnityW<::VROSC::HelmWrapper>  value) ;

constexpr void __cordl_internal_set__helmTwo(::UnityW<::VROSC::HelmWrapper>  value) ;

constexpr void __cordl_internal_set__helms(::System::Collections::Generic::List_1<::UnityW<::VROSC::HelmWrapper>>*  value) ;

constexpr void __cordl_internal_set__isHelmDirty(bool  value) ;

constexpr void __cordl_internal_set__patchSet(bool  value) ;

constexpr void __cordl_internal_set__reloadHelmRefreshRate(float_t  value) ;

constexpr void __cordl_internal_set__reloadHelmTimer(float_t  value) ;

constexpr void __cordl_internal_set__sampler(::UnityW<::VROSC::VirtuosoSampler>  value) ;

/// @brief Method .ctor, addr 0x17cb164, size 0x88, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Action_1<::VROSC::PatchSettings*>* getStaticF_OnActivePatchChanged() ;

static inline void setStaticF_OnActivePatchChanged(::System::Action_1<::VROSC::PatchSettings*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InternalSynthesizer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InternalSynthesizer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InternalSynthesizer(InternalSynthesizer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InternalSynthesizer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InternalSynthesizer(InternalSynthesizer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{286};

/// @brief Field _audioHelmClock, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::AudioHelm::AudioHelmClock>  ____audioHelmClock;

/// @brief Field _sampler, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::VROSC::VirtuosoSampler>  ____sampler;

/// @brief Field _helmOne, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::VROSC::HelmWrapper>  ____helmOne;

/// @brief Field _helmTwo, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::VROSC::HelmWrapper>  ____helmTwo;

/// @brief Field _helms, offset: 0x40, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::VROSC::HelmWrapper>>*  ____helms;

/// @brief Field _activeHelm, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::VROSC::HelmWrapper>  ____activeHelm;

/// @brief Field _currentSoundSource, offset: 0x50, size: 0x4, def value: None
 ::VROSC::SoundSource  ____currentSoundSource;

/// @brief Field _currentInstrumentId, offset: 0x54, size: 0x4, def value: None
 ::VROSC::WidgetSettings_Identifier  ____currentInstrumentId;

/// @brief Field _patchSet, offset: 0x58, size: 0x1, def value: None
 bool  ____patchSet;

/// @brief Field _isHelmDirty, offset: 0x59, size: 0x1, def value: None
 bool  ____isHelmDirty;

/// @brief Field _reloadHelmRefreshRate, offset: 0x5c, size: 0x4, def value: None
 float_t  ____reloadHelmRefreshRate;

/// @brief Field _reloadHelmTimer, offset: 0x60, size: 0x4, def value: None
 float_t  ____reloadHelmTimer;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::InternalSynthesizer, ____audioHelmClock) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::InternalSynthesizer, ____sampler) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::InternalSynthesizer, ____helmOne) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::InternalSynthesizer, ____helmTwo) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::InternalSynthesizer, ____helms) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::InternalSynthesizer, ____activeHelm) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::InternalSynthesizer, ____currentSoundSource) == 0x50, "Offset mismatch!");

static_assert(offsetof(::VROSC::InternalSynthesizer, ____currentInstrumentId) == 0x54, "Offset mismatch!");

static_assert(offsetof(::VROSC::InternalSynthesizer, ____patchSet) == 0x58, "Offset mismatch!");

static_assert(offsetof(::VROSC::InternalSynthesizer, ____isHelmDirty) == 0x59, "Offset mismatch!");

static_assert(offsetof(::VROSC::InternalSynthesizer, ____reloadHelmRefreshRate) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::VROSC::InternalSynthesizer, ____reloadHelmTimer) == 0x60, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::InternalSynthesizer, 0x68>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::InternalSynthesizer);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::InternalSynthesizer*, "VROSC", "InternalSynthesizer");
DEFINE_IL2CPP_ARG_TYPE(::VROSC::InternalSynthesizer__Setup_d__13, "VROSC", "InternalSynthesizer/<Setup>d__13");
