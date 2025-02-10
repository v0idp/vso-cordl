#pragma once
// IWYU pragma private; include "DG/Tweening/Core/SequenceCallback.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "DG/Tweening/Core/zzzz__ABSSequentiable_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(SequenceCallback)
namespace DG::Tweening {
class TweenCallback;
}
// Forward declare root types
namespace DG::Tweening::Core {
class SequenceCallback;
}
// Write type traits
MARK_REF_PTR_T(::DG::Tweening::Core::SequenceCallback);
// Dependencies DG.Tweening.Core.ABSSequentiable
namespace DG::Tweening::Core {
// Is value type: false
// CS Name: DG.Tweening.Core.SequenceCallback
class CORDL_TYPE SequenceCallback : public ::DG::Tweening::Core::ABSSequentiable {
public:
// Declarations
static inline ::DG::Tweening::Core::SequenceCallback* New_ctor(float_t  sequencedPosition, ::DG::Tweening::TweenCallback*  callback) ;

/// @brief Method .ctor, addr 0x18e62f0, size 0x40, virtual false, abstract: false, final false
inline void _ctor(float_t  sequencedPosition, ::DG::Tweening::TweenCallback*  callback) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SequenceCallback() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SequenceCallback", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SequenceCallback(SequenceCallback && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SequenceCallback", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SequenceCallback(SequenceCallback const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10851};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::DG::Tweening::Core::SequenceCallback, 0x28>, "Size mismatch!");

} // namespace end def DG::Tweening::Core
NEED_NO_BOX(::DG::Tweening::Core::SequenceCallback);
DEFINE_IL2CPP_ARG_TYPE(::DG::Tweening::Core::SequenceCallback*, "DG.Tweening.Core", "SequenceCallback");
