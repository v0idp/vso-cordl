#pragma once
// IWYU pragma private; include "System/Collections/Generic/IEnumerator_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
CORDL_MODULE_EXPORT(IEnumerator_1)
// Forward declare root types
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::System::Collections::Generic::IEnumerator_1);
// Dependencies System.Collections.IEnumerator, System.IDisposable
namespace System::Collections::Generic {
// cpp template
template<typename T>
// Is value type: false
// CS Name: System.Collections.Generic.IEnumerator`1<T>
class CORDL_TYPE IEnumerator_1 {
public:
// Declarations
 __declspec(property(get=get_Current)) T  Current;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method get_Current, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline T get_Current() ;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

// Ctor Parameters [CppParam { name: "", ty: "IEnumerator_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IEnumerator_1(IEnumerator_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3487};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Collections::Generic::IEnumerator_1, "System.Collections.Generic", "IEnumerator`1");
