#pragma once
// IWYU pragma private; include "RSG/IPromiseTimer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
CORDL_MODULE_EXPORT(IPromiseTimer)
namespace RSG {
class IPromise;
}
namespace RSG {
struct TimeData;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
// Forward declare root types
namespace RSG {
class IPromiseTimer;
}
// Write type traits
MARK_REF_PTR_T(::RSG::IPromiseTimer);
// Dependencies 
namespace RSG {
// Is value type: false
// CS Name: RSG.IPromiseTimer
class CORDL_TYPE IPromiseTimer {
public:
// Declarations
/// @brief Method Cancel, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool Cancel(::RSG::IPromise*  promise) ;

/// @brief Method Update, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Update(float_t  deltaTime) ;

/// @brief Method WaitFor, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::RSG::IPromise* WaitFor(float_t  seconds) ;

/// @brief Method WaitUntil, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::RSG::IPromise* WaitUntil(::System::Func_2<::RSG::TimeData,bool>*  predicate) ;

/// @brief Method WaitWhile, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::RSG::IPromise* WaitWhile(::System::Func_2<::RSG::TimeData,bool>*  predicate) ;

// Ctor Parameters [CppParam { name: "", ty: "IPromiseTimer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IPromiseTimer(IPromiseTimer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1691};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def RSG
NEED_NO_BOX(::RSG::IPromiseTimer);
DEFINE_IL2CPP_ARG_TYPE(::RSG::IPromiseTimer*, "RSG", "IPromiseTimer");
