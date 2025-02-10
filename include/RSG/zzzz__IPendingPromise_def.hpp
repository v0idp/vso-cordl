#pragma once
// IWYU pragma private; include "RSG/IPendingPromise.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "RSG/zzzz__IRejectable_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(IPendingPromise)
// Forward declare root types
namespace RSG {
class IPendingPromise;
}
// Write type traits
MARK_REF_PTR_T(::RSG::IPendingPromise);
// Dependencies RSG.IRejectable
namespace RSG {
// Is value type: false
// CS Name: RSG.IPendingPromise
class CORDL_TYPE IPendingPromise {
public:
// Declarations
 __declspec(property(get=get_Id)) int32_t  Id;

/// @brief Convert operator to "::RSG::IRejectable"
constexpr operator  ::RSG::IRejectable*() noexcept;

/// @brief Method ReportProgress, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void ReportProgress(float_t  progress) ;

/// @brief Method Resolve, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Resolve() ;

/// @brief Method get_Id, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline int32_t get_Id() ;

/// @brief Convert to "::RSG::IRejectable"
constexpr ::RSG::IRejectable* i___RSG__IRejectable() noexcept;

// Ctor Parameters [CppParam { name: "", ty: "IPendingPromise", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IPendingPromise(IPendingPromise const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1696};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def RSG
NEED_NO_BOX(::RSG::IPendingPromise);
DEFINE_IL2CPP_ARG_TYPE(::RSG::IPendingPromise*, "RSG", "IPendingPromise");
