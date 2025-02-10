#pragma once
// IWYU pragma private; include "VROSC/AudioMixManager.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(AudioMixManager)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class Object;
}
namespace UnityEngine::Audio {
class AudioMixer;
}
namespace UnityEngine {
class Coroutine;
}
namespace VROSC {
class AudioMixManager_VolumeParameter;
}
namespace VROSC {
class AudioMixManager__FadeCoroutine_d__17;
}
namespace VROSC {
class CompressionManager;
}
namespace VROSC {
struct Error;
}
namespace VROSC {
class ReverbManager;
}
namespace VROSC {
class UserDataControllers;
}
namespace VROSC {
class VolumeParameter_AudioMixManager_FadeSource;
}
// Forward declare root types
namespace VROSC {
class AudioMixManager;
}
namespace VROSC {
class AudioMixManager_VolumeParameter;
}
namespace VROSC {
class AudioMixManager__FadeCoroutine_d__17;
}
namespace VROSC {
class VolumeParameter_AudioMixManager_FadeSource;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::AudioMixManager);
MARK_REF_PTR_T(::VROSC::AudioMixManager_VolumeParameter);
MARK_REF_PTR_T(::VROSC::AudioMixManager__FadeCoroutine_d__17);
MARK_REF_PTR_T(::VROSC::VolumeParameter_AudioMixManager_FadeSource);
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.AudioMixManager/VolumeParameter/FadeSource
class CORDL_TYPE VolumeParameter_AudioMixManager_FadeSource : public ::System::Object {
public:
// Declarations
/// @brief Field Source, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_Source, put=__cordl_internal_set_Source)) ::System::Object*  Source;

/// @brief Field Volume, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_Volume, put=__cordl_internal_set_Volume)) float_t  Volume;

static inline ::VROSC::VolumeParameter_AudioMixManager_FadeSource* New_ctor(::System::Object*  source, float_t  volume) ;

constexpr ::System::Object* const& __cordl_internal_get_Source() const;

constexpr ::System::Object*& __cordl_internal_get_Source() ;

constexpr float_t const& __cordl_internal_get_Volume() const;

constexpr float_t& __cordl_internal_get_Volume() ;

constexpr void __cordl_internal_set_Source(::System::Object*  value) ;

constexpr void __cordl_internal_set_Volume(float_t  value) ;

/// @brief Method .ctor, addr 0x17cd8b8, size 0x38, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  source, float_t  volume) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VolumeParameter_AudioMixManager_FadeSource() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VolumeParameter_AudioMixManager_FadeSource", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
VolumeParameter_AudioMixManager_FadeSource(VolumeParameter_AudioMixManager_FadeSource && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VolumeParameter_AudioMixManager_FadeSource", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
VolumeParameter_AudioMixManager_FadeSource(VolumeParameter_AudioMixManager_FadeSource const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{290};

/// @brief Field Source, offset: 0x10, size: 0x8, def value: None
 ::System::Object*  ___Source;

/// @brief Field Volume, offset: 0x18, size: 0x4, def value: None
 float_t  ___Volume;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::VolumeParameter_AudioMixManager_FadeSource, ___Source) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::VolumeParameter_AudioMixManager_FadeSource, ___Volume) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::VolumeParameter_AudioMixManager_FadeSource, 0x20>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.AudioMixManager/VolumeParameter
class CORDL_TYPE AudioMixManager_VolumeParameter : public ::System::Object {
public:
// Declarations
using FadeSource = ::VROSC::VolumeParameter_AudioMixManager_FadeSource;

/// @brief Field FadingCoroutine, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_FadingCoroutine, put=__cordl_internal_set_FadingCoroutine)) ::UnityEngine::Coroutine*  FadingCoroutine;

/// @brief Field Name, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_Name, put=__cordl_internal_set_Name)) ::StringW  Name;

/// @brief Field UnfadedVolume, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_UnfadedVolume, put=__cordl_internal_set_UnfadedVolume)) float_t  UnfadedVolume;

/// @brief Field _fadeSources, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__fadeSources, put=__cordl_internal_set__fadeSources)) ::System::Collections::Generic::List_1<::VROSC::VolumeParameter_AudioMixManager_FadeSource*>*  _fadeSources;

/// @brief Method GetFadeVolume, addr 0x17cd2dc, size 0x160, virtual false, abstract: false, final false
inline float_t GetFadeVolume() ;

static inline ::VROSC::AudioMixManager_VolumeParameter* New_ctor(::StringW  name, ::UnityEngine::Audio::AudioMixer*  audioMixer) ;

/// @brief Method RegisterFade, addr 0x17cd0c0, size 0x21c, virtual false, abstract: false, final false
inline void RegisterFade(::System::Object*  source, float_t  volume) ;

/// @brief Method UnregisterFade, addr 0x17ccffc, size 0xc4, virtual false, abstract: false, final false
inline void UnregisterFade(::System::Object*  source) ;

constexpr ::UnityEngine::Coroutine* const& __cordl_internal_get_FadingCoroutine() const;

constexpr ::UnityEngine::Coroutine*& __cordl_internal_get_FadingCoroutine() ;

constexpr ::StringW const& __cordl_internal_get_Name() const;

constexpr ::StringW& __cordl_internal_get_Name() ;

constexpr float_t const& __cordl_internal_get_UnfadedVolume() const;

constexpr float_t& __cordl_internal_get_UnfadedVolume() ;

constexpr ::System::Collections::Generic::List_1<::VROSC::VolumeParameter_AudioMixManager_FadeSource*>* const& __cordl_internal_get__fadeSources() const;

constexpr ::System::Collections::Generic::List_1<::VROSC::VolumeParameter_AudioMixManager_FadeSource*>*& __cordl_internal_get__fadeSources() ;

constexpr void __cordl_internal_set_FadingCoroutine(::UnityEngine::Coroutine*  value) ;

constexpr void __cordl_internal_set_Name(::StringW  value) ;

constexpr void __cordl_internal_set_UnfadedVolume(float_t  value) ;

constexpr void __cordl_internal_set__fadeSources(::System::Collections::Generic::List_1<::VROSC::VolumeParameter_AudioMixManager_FadeSource*>*  value) ;

/// @brief Method .ctor, addr 0x17cc8d0, size 0xac, virtual false, abstract: false, final false
inline void _ctor(::StringW  name, ::UnityEngine::Audio::AudioMixer*  audioMixer) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AudioMixManager_VolumeParameter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AudioMixManager_VolumeParameter", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AudioMixManager_VolumeParameter(AudioMixManager_VolumeParameter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AudioMixManager_VolumeParameter", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AudioMixManager_VolumeParameter(AudioMixManager_VolumeParameter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{291};

/// @brief Field Name, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___Name;

/// @brief Field UnfadedVolume, offset: 0x18, size: 0x4, def value: None
 float_t  ___UnfadedVolume;

/// @brief Field FadingCoroutine, offset: 0x20, size: 0x8, def value: None
 ::UnityEngine::Coroutine*  ___FadingCoroutine;

/// @brief Field _fadeSources, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::VROSC::VolumeParameter_AudioMixManager_FadeSource*>*  ____fadeSources;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::AudioMixManager_VolumeParameter, ___Name) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::AudioMixManager_VolumeParameter, ___UnfadedVolume) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::AudioMixManager_VolumeParameter, ___FadingCoroutine) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::AudioMixManager_VolumeParameter, ____fadeSources) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::AudioMixManager_VolumeParameter, 0x30>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerator, System.IDisposable, System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.AudioMixManager/<FadeCoroutine>d__17
class CORDL_TYPE AudioMixManager__FadeCoroutine_d__17 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::VROSC::AudioMixManager>  __4__this;

/// @brief Field <progress>5__3, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get__progress_5__3, put=__cordl_internal_set__progress_5__3)) float_t  _progress_5__3;

/// @brief Field <startVolume>5__2, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get__startVolume_5__2, put=__cordl_internal_set__startVolume_5__2)) float_t  _startVolume_5__2;

/// @brief Field fadeTime, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_fadeTime, put=__cordl_internal_set_fadeTime)) float_t  fadeTime;

/// @brief Field parameterName, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_parameterName, put=__cordl_internal_set_parameterName)) ::StringW  parameterName;

/// @brief Field targetVolumeFractionDb, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_targetVolumeFractionDb, put=__cordl_internal_set_targetVolumeFractionDb)) float_t  targetVolumeFractionDb;

/// @brief Field unfadedVolume, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_unfadedVolume, put=__cordl_internal_set_unfadedVolume)) float_t  unfadedVolume;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x17cd8f4, size 0x154, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::VROSC::AudioMixManager__FadeCoroutine_d__17* New_ctor(int32_t  __1__state) ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x17cda48, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset, addr 0x17cda50, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x17cda88, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.IDisposable.Dispose, addr 0x17cd8f0, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::VROSC::AudioMixManager> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::VROSC::AudioMixManager>& __cordl_internal_get___4__this() ;

constexpr float_t const& __cordl_internal_get__progress_5__3() const;

constexpr float_t& __cordl_internal_get__progress_5__3() ;

constexpr float_t const& __cordl_internal_get__startVolume_5__2() const;

constexpr float_t& __cordl_internal_get__startVolume_5__2() ;

constexpr float_t const& __cordl_internal_get_fadeTime() const;

constexpr float_t& __cordl_internal_get_fadeTime() ;

constexpr ::StringW const& __cordl_internal_get_parameterName() const;

constexpr ::StringW& __cordl_internal_get_parameterName() ;

constexpr float_t const& __cordl_internal_get_targetVolumeFractionDb() const;

constexpr float_t& __cordl_internal_get_targetVolumeFractionDb() ;

constexpr float_t const& __cordl_internal_get_unfadedVolume() const;

constexpr float_t& __cordl_internal_get_unfadedVolume() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::VROSC::AudioMixManager>  value) ;

constexpr void __cordl_internal_set__progress_5__3(float_t  value) ;

constexpr void __cordl_internal_set__startVolume_5__2(float_t  value) ;

constexpr void __cordl_internal_set_fadeTime(float_t  value) ;

constexpr void __cordl_internal_set_parameterName(::StringW  value) ;

constexpr void __cordl_internal_set_targetVolumeFractionDb(float_t  value) ;

constexpr void __cordl_internal_set_unfadedVolume(float_t  value) ;

/// @brief Method .ctor, addr 0x17cd4cc, size 0x28, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AudioMixManager__FadeCoroutine_d__17() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AudioMixManager__FadeCoroutine_d__17", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AudioMixManager__FadeCoroutine_d__17(AudioMixManager__FadeCoroutine_d__17 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AudioMixManager__FadeCoroutine_d__17", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AudioMixManager__FadeCoroutine_d__17(AudioMixManager__FadeCoroutine_d__17 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{292};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::VROSC::AudioMixManager>  _____4__this;

/// @brief Field parameterName, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___parameterName;

/// @brief Field fadeTime, offset: 0x30, size: 0x4, def value: None
 float_t  ___fadeTime;

/// @brief Field unfadedVolume, offset: 0x34, size: 0x4, def value: None
 float_t  ___unfadedVolume;

/// @brief Field targetVolumeFractionDb, offset: 0x38, size: 0x4, def value: None
 float_t  ___targetVolumeFractionDb;

/// @brief Field <startVolume>5__2, offset: 0x3c, size: 0x4, def value: None
 float_t  ____startVolume_5__2;

/// @brief Field <progress>5__3, offset: 0x40, size: 0x4, def value: None
 float_t  ____progress_5__3;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::AudioMixManager__FadeCoroutine_d__17, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::AudioMixManager__FadeCoroutine_d__17, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::AudioMixManager__FadeCoroutine_d__17, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::AudioMixManager__FadeCoroutine_d__17, ___parameterName) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::AudioMixManager__FadeCoroutine_d__17, ___fadeTime) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::AudioMixManager__FadeCoroutine_d__17, ___unfadedVolume) == 0x34, "Offset mismatch!");

static_assert(offsetof(::VROSC::AudioMixManager__FadeCoroutine_d__17, ___targetVolumeFractionDb) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::AudioMixManager__FadeCoroutine_d__17, ____startVolume_5__2) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::VROSC::AudioMixManager__FadeCoroutine_d__17, ____progress_5__3) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::AudioMixManager__FadeCoroutine_d__17, 0x48>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies UnityEngine.MonoBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.AudioMixManager
class CORDL_TYPE AudioMixManager : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using VolumeParameter = ::VROSC::AudioMixManager_VolumeParameter;

using _FadeCoroutine_d__17 = ::VROSC::AudioMixManager__FadeCoroutine_d__17;

 __declspec(property(get=get_AudioMixer)) ::UnityW<::UnityEngine::Audio::AudioMixer>  AudioMixer;

/// @brief Field _audioMixer, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__audioMixer, put=__cordl_internal_set__audioMixer)) ::UnityW<::UnityEngine::Audio::AudioMixer>  _audioMixer;

/// @brief Field _compressionManager, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__compressionManager, put=__cordl_internal_set__compressionManager)) ::UnityW<::VROSC::CompressionManager>  _compressionManager;

/// @brief Field _fadedOutMaster, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get__fadedOutMaster, put=__cordl_internal_set__fadedOutMaster)) bool  _fadedOutMaster;

/// @brief Field _reverbManager, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__reverbManager, put=__cordl_internal_set__reverbManager)) ::UnityW<::VROSC::ReverbManager>  _reverbManager;

/// @brief Field _volumeParameters, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__volumeParameters, put=__cordl_internal_set__volumeParameters)) ::System::Collections::Generic::Dictionary_2<::StringW,::VROSC::AudioMixManager_VolumeParameter*>*  _volumeParameters;

/// @brief Method Awake, addr 0x17cc1e0, size 0x6f0, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method Fade, addr 0x17ccec4, size 0x138, virtual false, abstract: false, final false
inline void Fade(::StringW  parameterName, float_t  fadeTime, float_t  targetVolumeFraction, ::System::Object*  source) ;

/// @brief Method FadeCoroutine, addr 0x17cd43c, size 0x90, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* FadeCoroutine(::StringW  parameterName, float_t  fadeTime, float_t  unfadedVolume, float_t  targetVolumeFractionDb) ;

/// @brief Method FadeInAfterLoadSave, addr 0x17cd664, size 0x6c, virtual false, abstract: false, final false
inline void FadeInAfterLoadSave() ;

/// @brief Method FadeOutForLoadSave, addr 0x17cd6dc, size 0x70, virtual false, abstract: false, final false
inline void FadeOutForLoadSave() ;

/// @brief Method LoadFailed, addr 0x17cd6d8, size 0x4, virtual false, abstract: false, final false
inline void LoadFailed(::StringW  sessionId, bool  isDefaultSession, ::VROSC::Error  error) ;

/// @brief Method LoadSucceeded, addr 0x17cd6d4, size 0x4, virtual false, abstract: false, final false
inline void LoadSucceeded(::StringW  sessionId, bool  isDefaultSession) ;

static inline ::VROSC::AudioMixManager* New_ctor() ;

/// @brief Method OnDestroy, addr 0x17cc97c, size 0x548, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method PreferencesDataLoaded, addr 0x17cd5fc, size 0x64, virtual false, abstract: false, final false
inline void PreferencesDataLoaded(::VROSC::UserDataControllers*  userDataControllers) ;

/// @brief Method SaveFailed, addr 0x17cd6d0, size 0x4, virtual false, abstract: false, final false
inline void SaveFailed(::StringW  sessionId, ::VROSC::Error  error) ;

/// @brief Method SaveSucceeded, addr 0x17cd660, size 0x4, virtual false, abstract: false, final false
inline void SaveSucceeded(::StringW  sessionId) ;

/// @brief Method SetDrumsCompression, addr 0x17cd820, size 0x1c, virtual false, abstract: false, final false
inline void SetDrumsCompression(float_t  compression) ;

/// @brief Method SetDrumsDryVolume, addr 0x17cd784, size 0x9c, virtual false, abstract: false, final false
inline void SetDrumsDryVolume(float_t  volume) ;

/// @brief Method SetDrumsReverbAmount, addr 0x17cd74c, size 0x1c, virtual false, abstract: false, final false
inline void SetDrumsReverbAmount(float_t  amount) ;

/// @brief Method SetReverbLength, addr 0x17cd768, size 0x1c, virtual false, abstract: false, final false
inline void SetReverbLength(float_t  length) ;

/// @brief Method SetVolume, addr 0x17cd4f4, size 0x84, virtual false, abstract: false, final false
inline void SetVolume(::StringW  parameterName, float_t  volume) ;

/// @brief Method SetVolumeDb, addr 0x17cd578, size 0x84, virtual false, abstract: false, final false
inline void SetVolumeDb(::StringW  parameterName, float_t  volume) ;

constexpr ::UnityW<::UnityEngine::Audio::AudioMixer> const& __cordl_internal_get__audioMixer() const;

constexpr ::UnityW<::UnityEngine::Audio::AudioMixer>& __cordl_internal_get__audioMixer() ;

constexpr ::UnityW<::VROSC::CompressionManager> const& __cordl_internal_get__compressionManager() const;

constexpr ::UnityW<::VROSC::CompressionManager>& __cordl_internal_get__compressionManager() ;

constexpr bool const& __cordl_internal_get__fadedOutMaster() const;

constexpr bool& __cordl_internal_get__fadedOutMaster() ;

constexpr ::UnityW<::VROSC::ReverbManager> const& __cordl_internal_get__reverbManager() const;

constexpr ::UnityW<::VROSC::ReverbManager>& __cordl_internal_get__reverbManager() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::VROSC::AudioMixManager_VolumeParameter*>* const& __cordl_internal_get__volumeParameters() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::VROSC::AudioMixManager_VolumeParameter*>*& __cordl_internal_get__volumeParameters() ;

constexpr void __cordl_internal_set__audioMixer(::UnityW<::UnityEngine::Audio::AudioMixer>  value) ;

constexpr void __cordl_internal_set__compressionManager(::UnityW<::VROSC::CompressionManager>  value) ;

constexpr void __cordl_internal_set__fadedOutMaster(bool  value) ;

constexpr void __cordl_internal_set__reverbManager(::UnityW<::VROSC::ReverbManager>  value) ;

constexpr void __cordl_internal_set__volumeParameters(::System::Collections::Generic::Dictionary_2<::StringW,::VROSC::AudioMixManager_VolumeParameter*>*  value) ;

/// @brief Method .ctor, addr 0x17cd83c, size 0x7c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_AudioMixer, addr 0x17cc1d8, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Audio::AudioMixer> get_AudioMixer() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AudioMixManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AudioMixManager", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AudioMixManager(AudioMixManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AudioMixManager", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AudioMixManager(AudioMixManager const& ) = delete;

/// @brief Field GameSoundsVolume offset 0xffffffff size 0x8
static constexpr ::ConstString  GameSoundsVolume{u"GameSoundsVolume"};

/// @brief Field MasterVolume offset 0xffffffff size 0x8
static constexpr ::ConstString  MasterVolume{u"MasterVolume"};

/// @brief Field MicrophoneReverbPreviewL offset 0xffffffff size 0x8
static constexpr ::ConstString  MicrophoneReverbPreviewL{u"ReverbPreviewVolumeL"};

/// @brief Field MicrophoneReverbPreviewR offset 0xffffffff size 0x8
static constexpr ::ConstString  MicrophoneReverbPreviewR{u"ReverbPreviewVolumeR"};

/// @brief Field MicrophoneReverbVolume offset 0xffffffff size 0x8
static constexpr ::ConstString  MicrophoneReverbVolume{u"MicrophoneReverbVolume"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{293};

/// @brief Field _minVolumeDb offset 0xffffffff size 0x4
static constexpr float_t  _minVolumeDb{static_cast<float_t>(-80.0f)};

/// @brief Field _audioMixer, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Audio::AudioMixer>  ____audioMixer;

/// @brief Field _reverbManager, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::VROSC::ReverbManager>  ____reverbManager;

/// @brief Field _compressionManager, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::VROSC::CompressionManager>  ____compressionManager;

/// @brief Field _volumeParameters, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::VROSC::AudioMixManager_VolumeParameter*>*  ____volumeParameters;

/// @brief Field _fadedOutMaster, offset: 0x40, size: 0x1, def value: None
 bool  ____fadedOutMaster;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::AudioMixManager, ____audioMixer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::AudioMixManager, ____reverbManager) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::AudioMixManager, ____compressionManager) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::AudioMixManager, ____volumeParameters) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::AudioMixManager, ____fadedOutMaster) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::AudioMixManager, 0x48>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::AudioMixManager);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::AudioMixManager*, "VROSC", "AudioMixManager");
NEED_NO_BOX(::VROSC::AudioMixManager_VolumeParameter);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::AudioMixManager_VolumeParameter*, "VROSC", "AudioMixManager/VolumeParameter");
NEED_NO_BOX(::VROSC::AudioMixManager__FadeCoroutine_d__17);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::AudioMixManager__FadeCoroutine_d__17*, "VROSC", "AudioMixManager/<FadeCoroutine>d__17");
NEED_NO_BOX(::VROSC::VolumeParameter_AudioMixManager_FadeSource);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::VolumeParameter_AudioMixManager_FadeSource*, "VROSC", "AudioMixManager/VolumeParameter/FadeSource");
