#pragma once
// IWYU pragma private; include "System/IObservable_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IObservable_1)
namespace System {
class IDisposable;
}
namespace System {
template<typename T>
class IObserver_1;
}
// Forward declare root types
namespace System {
template<typename T>
class IObservable_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::System::IObservable_1);
// Dependencies 
namespace System {
// cpp template
template<typename T>
// Is value type: false
// CS Name: System.IObservable`1<T>
class CORDL_TYPE IObservable_1 {
public:
// Declarations
/// @brief Method Subscribe, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::System::IDisposable* Subscribe(::System::IObserver_1<T>*  observer) ;

// Ctor Parameters [CppParam { name: "", ty: "IObservable_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IObservable_1(IObservable_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2130};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::IObservable_1, "System", "IObservable`1");
