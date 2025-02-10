#pragma once
// IWYU pragma private; include "DG/Tweening/EaseFactory.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(EaseFactory)
namespace DG::Tweening {
class EaseFactory___c__DisplayClass2_0;
}
namespace DG::Tweening {
class EaseFunction;
}
namespace DG::Tweening {
struct Ease;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace UnityEngine {
class AnimationCurve;
}
// Forward declare root types
namespace DG::Tweening {
class EaseFactory;
}
namespace DG::Tweening {
class EaseFactory___c__DisplayClass2_0;
}
// Write type traits
MARK_REF_PTR_T(::DG::Tweening::EaseFactory);
MARK_REF_PTR_T(::DG::Tweening::EaseFactory___c__DisplayClass2_0);
// Dependencies System.Object
namespace DG::Tweening {
// Is value type: false
// CS Name: DG.Tweening.EaseFactory/<>c__DisplayClass2_0
class CORDL_TYPE EaseFactory___c__DisplayClass2_0 : public ::System::Object {
public:
// Declarations
/// @brief Field customEase, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_customEase, put=__cordl_internal_set_customEase)) ::DG::Tweening::EaseFunction*  customEase;

/// @brief Field motionDelay, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_motionDelay, put=__cordl_internal_set_motionDelay)) float_t  motionDelay;

static inline ::DG::Tweening::EaseFactory___c__DisplayClass2_0* New_ctor() ;

/// @brief Method <StopMotion>b__0, addr 0x18c632c, size 0x70, virtual false, abstract: false, final false
inline float_t _StopMotion_b__0(float_t  time, float_t  duration, float_t  overshootOrAmplitude, float_t  period) ;

constexpr ::DG::Tweening::EaseFunction* const& __cordl_internal_get_customEase() const;

constexpr ::DG::Tweening::EaseFunction*& __cordl_internal_get_customEase() ;

constexpr float_t const& __cordl_internal_get_motionDelay() const;

constexpr float_t& __cordl_internal_get_motionDelay() ;

constexpr void __cordl_internal_set_customEase(::DG::Tweening::EaseFunction*  value) ;

constexpr void __cordl_internal_set_motionDelay(float_t  value) ;

/// @brief Method .ctor, addr 0x18c631c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EaseFactory___c__DisplayClass2_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EaseFactory___c__DisplayClass2_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EaseFactory___c__DisplayClass2_0(EaseFactory___c__DisplayClass2_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EaseFactory___c__DisplayClass2_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EaseFactory___c__DisplayClass2_0(EaseFactory___c__DisplayClass2_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10694};

/// @brief Field motionDelay, offset: 0x10, size: 0x4, def value: None
 float_t  ___motionDelay;

/// @brief Field customEase, offset: 0x18, size: 0x8, def value: None
 ::DG::Tweening::EaseFunction*  ___customEase;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::DG::Tweening::EaseFactory___c__DisplayClass2_0, ___motionDelay) == 0x10, "Offset mismatch!");

static_assert(offsetof(::DG::Tweening::EaseFactory___c__DisplayClass2_0, ___customEase) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::DG::Tweening::EaseFactory___c__DisplayClass2_0, 0x20>, "Size mismatch!");

} // namespace end def DG::Tweening
// Dependencies System.Object
namespace DG::Tweening {
// Is value type: false
// CS Name: DG.Tweening.EaseFactory
class CORDL_TYPE EaseFactory : public ::System::Object {
public:
// Declarations
using __c__DisplayClass2_0 = ::DG::Tweening::EaseFactory___c__DisplayClass2_0;

static inline ::DG::Tweening::EaseFactory* New_ctor() ;

/// @brief Method StopMotion, addr 0x18c6268, size 0xb4, virtual false, abstract: false, final false
static inline ::DG::Tweening::EaseFunction* StopMotion(int32_t  motionFps, ::UnityEngine::AnimationCurve*  animCurve) ;

/// @brief Method StopMotion, addr 0x18c61a8, size 0xc0, virtual false, abstract: false, final false
static inline ::DG::Tweening::EaseFunction* StopMotion(int32_t  motionFps, ::DG::Tweening::EaseFunction*  customEase) ;

/// @brief Method StopMotion, addr 0x18c60f0, size 0xb8, virtual false, abstract: false, final false
static inline ::DG::Tweening::EaseFunction* StopMotion(int32_t  motionFps, ::System::Nullable_1<::DG::Tweening::Ease>  ease) ;

/// @brief Method .ctor, addr 0x18c6324, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EaseFactory() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EaseFactory", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EaseFactory(EaseFactory && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EaseFactory", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EaseFactory(EaseFactory const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10695};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::DG::Tweening::EaseFactory, 0x10>, "Size mismatch!");

} // namespace end def DG::Tweening
NEED_NO_BOX(::DG::Tweening::EaseFactory);
DEFINE_IL2CPP_ARG_TYPE(::DG::Tweening::EaseFactory*, "DG.Tweening", "EaseFactory");
NEED_NO_BOX(::DG::Tweening::EaseFactory___c__DisplayClass2_0);
DEFINE_IL2CPP_ARG_TYPE(::DG::Tweening::EaseFactory___c__DisplayClass2_0*, "DG.Tweening", "EaseFactory/<>c__DisplayClass2_0");
