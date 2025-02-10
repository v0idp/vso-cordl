#pragma once
// IWYU pragma private; include "DG/Tweening/IDOTweenInit.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(IDOTweenInit)
// Forward declare root types
namespace DG::Tweening {
class IDOTweenInit;
}
// Write type traits
MARK_REF_PTR_T(::DG::Tweening::IDOTweenInit);
// Dependencies 
namespace DG::Tweening {
// Is value type: false
// CS Name: DG.Tweening.IDOTweenInit
class CORDL_TYPE IDOTweenInit {
public:
// Declarations
/// @brief Method SetCapacity, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::DG::Tweening::IDOTweenInit* SetCapacity(int32_t  tweenersCapacity, int32_t  sequencesCapacity) ;

// Ctor Parameters [CppParam { name: "", ty: "IDOTweenInit", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IDOTweenInit(IDOTweenInit const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10696};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def DG::Tweening
NEED_NO_BOX(::DG::Tweening::IDOTweenInit);
DEFINE_IL2CPP_ARG_TYPE(::DG::Tweening::IDOTweenInit*, "DG.Tweening", "IDOTweenInit");
