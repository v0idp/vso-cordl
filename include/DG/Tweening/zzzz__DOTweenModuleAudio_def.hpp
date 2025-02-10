#pragma once
// IWYU pragma private; include "DG/Tweening/DOTweenModuleAudio.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(DOTweenModuleAudio)
namespace DG::Tweening::Core {
template<typename T1,typename T2,typename TPlugOptions>
class TweenerCore_3;
}
namespace DG::Tweening::Plugins::Options {
struct FloatOptions;
}
namespace DG::Tweening {
class DOTweenModuleAudio___c__DisplayClass0_0;
}
namespace DG::Tweening {
class DOTweenModuleAudio___c__DisplayClass1_0;
}
namespace DG::Tweening {
class DOTweenModuleAudio___c__DisplayClass2_0;
}
namespace UnityEngine::Audio {
class AudioMixer;
}
namespace UnityEngine {
class AudioSource;
}
// Forward declare root types
namespace DG::Tweening {
class DOTweenModuleAudio;
}
namespace DG::Tweening {
class DOTweenModuleAudio___c__DisplayClass0_0;
}
namespace DG::Tweening {
class DOTweenModuleAudio___c__DisplayClass1_0;
}
namespace DG::Tweening {
class DOTweenModuleAudio___c__DisplayClass2_0;
}
// Write type traits
MARK_REF_PTR_T(::DG::Tweening::DOTweenModuleAudio);
MARK_REF_PTR_T(::DG::Tweening::DOTweenModuleAudio___c__DisplayClass0_0);
MARK_REF_PTR_T(::DG::Tweening::DOTweenModuleAudio___c__DisplayClass1_0);
MARK_REF_PTR_T(::DG::Tweening::DOTweenModuleAudio___c__DisplayClass2_0);
// Dependencies System.Object
namespace DG::Tweening {
// Is value type: false
// CS Name: DG.Tweening.DOTweenModuleAudio/<>c__DisplayClass0_0
class CORDL_TYPE DOTweenModuleAudio___c__DisplayClass0_0 : public ::System::Object {
public:
// Declarations
/// @brief Field target, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_target, put=__cordl_internal_set_target)) ::UnityW<::UnityEngine::AudioSource>  target;

static inline ::DG::Tweening::DOTweenModuleAudio___c__DisplayClass0_0* New_ctor() ;

/// @brief Method <DOFade>b__0, addr 0x16acde0, size 0x1c, virtual false, abstract: false, final false
inline float_t _DOFade_b__0() ;

/// @brief Method <DOFade>b__1, addr 0x16acdfc, size 0x1c, virtual false, abstract: false, final false
inline void _DOFade_b__1(float_t  x) ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_target() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_target() ;

constexpr void __cordl_internal_set_target(::UnityW<::UnityEngine::AudioSource>  value) ;

/// @brief Method .ctor, addr 0x16ac680, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DOTweenModuleAudio___c__DisplayClass0_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DOTweenModuleAudio___c__DisplayClass0_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DOTweenModuleAudio___c__DisplayClass0_0(DOTweenModuleAudio___c__DisplayClass0_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DOTweenModuleAudio___c__DisplayClass0_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DOTweenModuleAudio___c__DisplayClass0_0(DOTweenModuleAudio___c__DisplayClass0_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11730};

/// @brief Field target, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___target;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::DG::Tweening::DOTweenModuleAudio___c__DisplayClass0_0, ___target) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::DG::Tweening::DOTweenModuleAudio___c__DisplayClass0_0, 0x18>, "Size mismatch!");

} // namespace end def DG::Tweening
// Dependencies System.Object
namespace DG::Tweening {
// Is value type: false
// CS Name: DG.Tweening.DOTweenModuleAudio/<>c__DisplayClass1_0
class CORDL_TYPE DOTweenModuleAudio___c__DisplayClass1_0 : public ::System::Object {
public:
// Declarations
/// @brief Field target, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_target, put=__cordl_internal_set_target)) ::UnityW<::UnityEngine::AudioSource>  target;

static inline ::DG::Tweening::DOTweenModuleAudio___c__DisplayClass1_0* New_ctor() ;

/// @brief Method <DOPitch>b__0, addr 0x16ace18, size 0x1c, virtual false, abstract: false, final false
inline float_t _DOPitch_b__0() ;

/// @brief Method <DOPitch>b__1, addr 0x16ace34, size 0x1c, virtual false, abstract: false, final false
inline void _DOPitch_b__1(float_t  x) ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_target() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_target() ;

constexpr void __cordl_internal_set_target(::UnityW<::UnityEngine::AudioSource>  value) ;

/// @brief Method .ctor, addr 0x16ac7f4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DOTweenModuleAudio___c__DisplayClass1_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DOTweenModuleAudio___c__DisplayClass1_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DOTweenModuleAudio___c__DisplayClass1_0(DOTweenModuleAudio___c__DisplayClass1_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DOTweenModuleAudio___c__DisplayClass1_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DOTweenModuleAudio___c__DisplayClass1_0(DOTweenModuleAudio___c__DisplayClass1_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11731};

/// @brief Field target, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___target;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::DG::Tweening::DOTweenModuleAudio___c__DisplayClass1_0, ___target) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::DG::Tweening::DOTweenModuleAudio___c__DisplayClass1_0, 0x18>, "Size mismatch!");

} // namespace end def DG::Tweening
// Dependencies System.Object
namespace DG::Tweening {
// Is value type: false
// CS Name: DG.Tweening.DOTweenModuleAudio/<>c__DisplayClass2_0
class CORDL_TYPE DOTweenModuleAudio___c__DisplayClass2_0 : public ::System::Object {
public:
// Declarations
/// @brief Field floatName, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_floatName, put=__cordl_internal_set_floatName)) ::StringW  floatName;

/// @brief Field target, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_target, put=__cordl_internal_set_target)) ::UnityW<::UnityEngine::Audio::AudioMixer>  target;

static inline ::DG::Tweening::DOTweenModuleAudio___c__DisplayClass2_0* New_ctor() ;

/// @brief Method <DOSetFloat>b__0, addr 0x16ace50, size 0x34, virtual false, abstract: false, final false
inline float_t _DOSetFloat_b__0() ;

/// @brief Method <DOSetFloat>b__1, addr 0x16ace84, size 0x24, virtual false, abstract: false, final false
inline void _DOSetFloat_b__1(float_t  x) ;

constexpr ::StringW const& __cordl_internal_get_floatName() const;

constexpr ::StringW& __cordl_internal_get_floatName() ;

constexpr ::UnityW<::UnityEngine::Audio::AudioMixer> const& __cordl_internal_get_target() const;

constexpr ::UnityW<::UnityEngine::Audio::AudioMixer>& __cordl_internal_get_target() ;

constexpr void __cordl_internal_set_floatName(::StringW  value) ;

constexpr void __cordl_internal_set_target(::UnityW<::UnityEngine::Audio::AudioMixer>  value) ;

/// @brief Method .ctor, addr 0x16ac96c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DOTweenModuleAudio___c__DisplayClass2_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DOTweenModuleAudio___c__DisplayClass2_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DOTweenModuleAudio___c__DisplayClass2_0(DOTweenModuleAudio___c__DisplayClass2_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DOTweenModuleAudio___c__DisplayClass2_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DOTweenModuleAudio___c__DisplayClass2_0(DOTweenModuleAudio___c__DisplayClass2_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11732};

/// @brief Field target, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Audio::AudioMixer>  ___target;

/// @brief Field floatName, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___floatName;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::DG::Tweening::DOTweenModuleAudio___c__DisplayClass2_0, ___target) == 0x10, "Offset mismatch!");

static_assert(offsetof(::DG::Tweening::DOTweenModuleAudio___c__DisplayClass2_0, ___floatName) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::DG::Tweening::DOTweenModuleAudio___c__DisplayClass2_0, 0x20>, "Size mismatch!");

} // namespace end def DG::Tweening
// Dependencies System.Object
namespace DG::Tweening {
// Is value type: false
// CS Name: DG.Tweening.DOTweenModuleAudio
class CORDL_TYPE DOTweenModuleAudio : public ::System::Object {
public:
// Declarations
using __c__DisplayClass0_0 = ::DG::Tweening::DOTweenModuleAudio___c__DisplayClass0_0;

using __c__DisplayClass1_0 = ::DG::Tweening::DOTweenModuleAudio___c__DisplayClass1_0;

using __c__DisplayClass2_0 = ::DG::Tweening::DOTweenModuleAudio___c__DisplayClass2_0;

/// @brief Method DOComplete, addr 0x16ac974, size 0x68, virtual false, abstract: false, final false
static inline int32_t DOComplete(::UnityEngine::Audio::AudioMixer*  target, bool  withCallbacks) ;

/// @brief Method DOFade, addr 0x16ac4ec, size 0x194, virtual false, abstract: false, final false
static inline ::DG::Tweening::Core::TweenerCore_3<float_t,float_t,::DG::Tweening::Plugins::Options::FloatOptions>* DOFade(::UnityEngine::AudioSource*  target, float_t  endValue, float_t  duration) ;

/// @brief Method DOFlip, addr 0x16aca44, size 0x58, virtual false, abstract: false, final false
static inline int32_t DOFlip(::UnityEngine::Audio::AudioMixer*  target) ;

/// @brief Method DOGoto, addr 0x16aca9c, size 0x78, virtual false, abstract: false, final false
static inline int32_t DOGoto(::UnityEngine::Audio::AudioMixer*  target, float_t  to, bool  andPlay) ;

/// @brief Method DOKill, addr 0x16ac9dc, size 0x68, virtual false, abstract: false, final false
static inline int32_t DOKill(::UnityEngine::Audio::AudioMixer*  target, bool  complete) ;

/// @brief Method DOPause, addr 0x16acb14, size 0x58, virtual false, abstract: false, final false
static inline int32_t DOPause(::UnityEngine::Audio::AudioMixer*  target) ;

/// @brief Method DOPitch, addr 0x16ac688, size 0x16c, virtual false, abstract: false, final false
static inline ::DG::Tweening::Core::TweenerCore_3<float_t,float_t,::DG::Tweening::Plugins::Options::FloatOptions>* DOPitch(::UnityEngine::AudioSource*  target, float_t  endValue, float_t  duration) ;

/// @brief Method DOPlay, addr 0x16acb6c, size 0x58, virtual false, abstract: false, final false
static inline int32_t DOPlay(::UnityEngine::Audio::AudioMixer*  target) ;

/// @brief Method DOPlayBackwards, addr 0x16acbc4, size 0x58, virtual false, abstract: false, final false
static inline int32_t DOPlayBackwards(::UnityEngine::Audio::AudioMixer*  target) ;

/// @brief Method DOPlayForward, addr 0x16acc1c, size 0x58, virtual false, abstract: false, final false
static inline int32_t DOPlayForward(::UnityEngine::Audio::AudioMixer*  target) ;

/// @brief Method DORestart, addr 0x16acc74, size 0x60, virtual false, abstract: false, final false
static inline int32_t DORestart(::UnityEngine::Audio::AudioMixer*  target) ;

/// @brief Method DORewind, addr 0x16accd4, size 0x5c, virtual false, abstract: false, final false
static inline int32_t DORewind(::UnityEngine::Audio::AudioMixer*  target) ;

/// @brief Method DOSetFloat, addr 0x16ac7fc, size 0x170, virtual false, abstract: false, final false
static inline ::DG::Tweening::Core::TweenerCore_3<float_t,float_t,::DG::Tweening::Plugins::Options::FloatOptions>* DOSetFloat(::UnityEngine::Audio::AudioMixer*  target, ::StringW  floatName, float_t  endValue, float_t  duration) ;

/// @brief Method DOSmoothRewind, addr 0x16acd30, size 0x58, virtual false, abstract: false, final false
static inline int32_t DOSmoothRewind(::UnityEngine::Audio::AudioMixer*  target) ;

/// @brief Method DOTogglePause, addr 0x16acd88, size 0x58, virtual false, abstract: false, final false
static inline int32_t DOTogglePause(::UnityEngine::Audio::AudioMixer*  target) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DOTweenModuleAudio() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DOTweenModuleAudio", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DOTweenModuleAudio(DOTweenModuleAudio && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DOTweenModuleAudio", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DOTweenModuleAudio(DOTweenModuleAudio const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11733};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::DG::Tweening::DOTweenModuleAudio, 0x10>, "Size mismatch!");

} // namespace end def DG::Tweening
NEED_NO_BOX(::DG::Tweening::DOTweenModuleAudio);
DEFINE_IL2CPP_ARG_TYPE(::DG::Tweening::DOTweenModuleAudio*, "DG.Tweening", "DOTweenModuleAudio");
NEED_NO_BOX(::DG::Tweening::DOTweenModuleAudio___c__DisplayClass0_0);
DEFINE_IL2CPP_ARG_TYPE(::DG::Tweening::DOTweenModuleAudio___c__DisplayClass0_0*, "DG.Tweening", "DOTweenModuleAudio/<>c__DisplayClass0_0");
NEED_NO_BOX(::DG::Tweening::DOTweenModuleAudio___c__DisplayClass1_0);
DEFINE_IL2CPP_ARG_TYPE(::DG::Tweening::DOTweenModuleAudio___c__DisplayClass1_0*, "DG.Tweening", "DOTweenModuleAudio/<>c__DisplayClass1_0");
NEED_NO_BOX(::DG::Tweening::DOTweenModuleAudio___c__DisplayClass2_0);
DEFINE_IL2CPP_ARG_TYPE(::DG::Tweening::DOTweenModuleAudio___c__DisplayClass2_0*, "DG.Tweening", "DOTweenModuleAudio/<>c__DisplayClass2_0");
