#pragma once
// IWYU pragma private; include "System/IProgress_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IProgress_1)
// Forward declare root types
namespace System {
template<typename T>
class IProgress_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::System::IProgress_1);
// Dependencies 
namespace System {
// cpp template
template<typename T>
// Is value type: false
// CS Name: System.IProgress`1<T>
class CORDL_TYPE IProgress_1 {
public:
// Declarations
/// @brief Method Report, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Report(T  value) ;

// Ctor Parameters [CppParam { name: "", ty: "IProgress_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IProgress_1(IProgress_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2132};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::IProgress_1, "System", "IProgress`1");
