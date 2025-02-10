#pragma once
// IWYU pragma private; include "DG/Tweening/Sequence.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "DG/Tweening/zzzz__Tween_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Sequence)
namespace DG::Tweening::Core::Enums {
struct UpdateMode;
}
namespace DG::Tweening::Core::Enums {
struct UpdateNotice;
}
namespace DG::Tweening::Core {
class ABSSequentiable;
}
namespace DG::Tweening {
class TweenCallback;
}
namespace DG::Tweening {
class Tween;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace DG::Tweening {
class Sequence;
}
// Write type traits
MARK_REF_PTR_T(::DG::Tweening::Sequence);
// Dependencies DG.Tweening.Tween
namespace DG::Tweening {
// Is value type: false
// CS Name: DG.Tweening.Sequence
class CORDL_TYPE Sequence : public ::DG::Tweening::Tween {
public:
// Declarations
/// @brief Field _sequencedObjs, offset 0x128, size 0x8 
 __declspec(property(get=__cordl_internal_get__sequencedObjs, put=__cordl_internal_set__sequencedObjs)) ::System::Collections::Generic::List_1<::DG::Tweening::Core::ABSSequentiable*>*  _sequencedObjs;

/// @brief Field lastTweenInsertTime, offset 0x130, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastTweenInsertTime, put=__cordl_internal_set_lastTweenInsertTime)) float_t  lastTweenInsertTime;

/// @brief Field sequencedTweens, offset 0x120, size 0x8 
 __declspec(property(get=__cordl_internal_get_sequencedTweens, put=__cordl_internal_set_sequencedTweens)) ::System::Collections::Generic::List_1<::DG::Tweening::Tween*>*  sequencedTweens;

/// @brief Method ApplyInternalCycle, addr 0x18c9898, size 0x720, virtual false, abstract: false, final false
static inline bool ApplyInternalCycle(::DG::Tweening::Sequence*  s, float_t  fromPos, float_t  toPos, ::DG::Tweening::Core::Enums::UpdateMode  updateMode, bool  useInverse, bool  prevPosIsInverse, bool  multiCycleStep) ;

/// @brief Method ApplyTween, addr 0x18c9438, size 0x8, virtual true, abstract: false, final false
inline bool ApplyTween(float_t  prevPosition, int32_t  prevCompletedLoops, int32_t  newCompletedSteps, bool  useInversePosition, ::DG::Tweening::Core::Enums::UpdateMode  updateMode, ::DG::Tweening::Core::Enums::UpdateNotice  updateNotice) ;

/// @brief Method DoAppendInterval, addr 0x18c8f08, size 0x24, virtual false, abstract: false, final false
static inline ::DG::Tweening::Sequence* DoAppendInterval(::DG::Tweening::Sequence*  inSequence, float_t  interval) ;

/// @brief Method DoApplyTween, addr 0x18c9440, size 0x2cc, virtual false, abstract: false, final false
static inline bool DoApplyTween(::DG::Tweening::Sequence*  s, float_t  prevPosition, int32_t  prevCompletedLoops, int32_t  newCompletedSteps, bool  useInversePosition, ::DG::Tweening::Core::Enums::UpdateMode  updateMode) ;

/// @brief Method DoInsert, addr 0x18c8d48, size 0x1c0, virtual false, abstract: false, final false
static inline ::DG::Tweening::Sequence* DoInsert(::DG::Tweening::Sequence*  inSequence, ::DG::Tweening::Tween*  t, float_t  atPosition) ;

/// @brief Method DoInsertCallback, addr 0x18c9000, size 0x100, virtual false, abstract: false, final false
static inline ::DG::Tweening::Sequence* DoInsertCallback(::DG::Tweening::Sequence*  inSequence, ::DG::Tweening::TweenCallback*  callback, float_t  atPosition) ;

/// @brief Method DoPrepend, addr 0x18c8c50, size 0xf8, virtual false, abstract: false, final false
static inline ::DG::Tweening::Sequence* DoPrepend(::DG::Tweening::Sequence*  inSequence, ::DG::Tweening::Tween*  t) ;

/// @brief Method DoPrependInterval, addr 0x18c8f2c, size 0xd4, virtual false, abstract: false, final false
static inline ::DG::Tweening::Sequence* DoPrependInterval(::DG::Tweening::Sequence*  inSequence, float_t  interval) ;

/// @brief Method DoStartup, addr 0x18c92f8, size 0x140, virtual false, abstract: false, final false
static inline bool DoStartup(::DG::Tweening::Sequence*  s) ;

/// @brief Method IsAnyCallbackSet, addr 0x18c970c, size 0x60, virtual false, abstract: false, final false
static inline bool IsAnyCallbackSet(::DG::Tweening::Sequence*  s) ;

static inline ::DG::Tweening::Sequence* New_ctor() ;

/// @brief Method Reset, addr 0x18c9100, size 0xac, virtual true, abstract: false, final false
inline void Reset() ;

/// @brief Method Setup, addr 0x18c44e4, size 0xd4, virtual false, abstract: false, final false
static inline void Setup(::DG::Tweening::Sequence*  s) ;

/// @brief Method StableSortSequencedObjs, addr 0x18c976c, size 0x12c, virtual false, abstract: false, final false
static inline void StableSortSequencedObjs(::System::Collections::Generic::List_1<::DG::Tweening::Core::ABSSequentiable*>*  list) ;

/// @brief Method Startup, addr 0x18c92f4, size 0x4, virtual true, abstract: false, final false
inline bool Startup() ;

/// @brief Method Validate, addr 0x18c9238, size 0xbc, virtual true, abstract: false, final false
inline bool Validate() ;

constexpr ::System::Collections::Generic::List_1<::DG::Tweening::Core::ABSSequentiable*>* const& __cordl_internal_get__sequencedObjs() const;

constexpr ::System::Collections::Generic::List_1<::DG::Tweening::Core::ABSSequentiable*>*& __cordl_internal_get__sequencedObjs() ;

constexpr float_t const& __cordl_internal_get_lastTweenInsertTime() const;

constexpr float_t& __cordl_internal_get_lastTweenInsertTime() ;

constexpr ::System::Collections::Generic::List_1<::DG::Tweening::Tween*>* const& __cordl_internal_get_sequencedTweens() const;

constexpr ::System::Collections::Generic::List_1<::DG::Tweening::Tween*>*& __cordl_internal_get_sequencedTweens() ;

constexpr void __cordl_internal_set__sequencedObjs(::System::Collections::Generic::List_1<::DG::Tweening::Core::ABSSequentiable*>*  value) ;

constexpr void __cordl_internal_set_lastTweenInsertTime(float_t  value) ;

constexpr void __cordl_internal_set_sequencedTweens(::System::Collections::Generic::List_1<::DG::Tweening::Tween*>*  value) ;

/// @brief Method .ctor, addr 0x18c8b38, size 0xf4, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Sequence() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Sequence", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Sequence(Sequence && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Sequence", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Sequence(Sequence const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10704};

/// @brief Field sequencedTweens, offset: 0x120, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::DG::Tweening::Tween*>*  ___sequencedTweens;

/// @brief Field _sequencedObjs, offset: 0x128, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::DG::Tweening::Core::ABSSequentiable*>*  ____sequencedObjs;

/// @brief Field lastTweenInsertTime, offset: 0x130, size: 0x4, def value: None
 float_t  ___lastTweenInsertTime;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::DG::Tweening::Sequence, ___sequencedTweens) == 0x120, "Offset mismatch!");

static_assert(offsetof(::DG::Tweening::Sequence, ____sequencedObjs) == 0x128, "Offset mismatch!");

static_assert(offsetof(::DG::Tweening::Sequence, ___lastTweenInsertTime) == 0x130, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::DG::Tweening::Sequence, 0x138>, "Size mismatch!");

} // namespace end def DG::Tweening
NEED_NO_BOX(::DG::Tweening::Sequence);
DEFINE_IL2CPP_ARG_TYPE(::DG::Tweening::Sequence*, "DG.Tweening", "Sequence");
