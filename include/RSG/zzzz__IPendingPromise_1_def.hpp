#pragma once
// IWYU pragma private; include "RSG/IPendingPromise_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "RSG/zzzz__IRejectable_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(IPendingPromise_1)
// Forward declare root types
namespace RSG {
template<typename PromisedT>
class IPendingPromise_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::RSG::IPendingPromise_1);
// Dependencies RSG.IRejectable
namespace RSG {
// cpp template
template<typename PromisedT>
// Is value type: false
// CS Name: RSG.IPendingPromise`1<PromisedT>
class CORDL_TYPE IPendingPromise_1 {
public:
// Declarations
 __declspec(property(get=get_Id)) int32_t  Id;

/// @brief Convert operator to "::RSG::IRejectable"
constexpr operator  ::RSG::IRejectable*() noexcept;

/// @brief Method ReportProgress, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void ReportProgress(float_t  progress) ;

/// @brief Method Resolve, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Resolve(PromisedT  value) ;

/// @brief Method get_Id, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline int32_t get_Id() ;

/// @brief Convert to "::RSG::IRejectable"
constexpr ::RSG::IRejectable* i___RSG__IRejectable() noexcept;

// Ctor Parameters [CppParam { name: "", ty: "IPendingPromise_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IPendingPromise_1(IPendingPromise_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1662};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def RSG
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::RSG::IPendingPromise_1, "RSG", "IPendingPromise`1");
