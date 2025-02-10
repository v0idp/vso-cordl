#pragma once
// IWYU pragma private; include "System/Predicate_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
CORDL_MODULE_EXPORT(Predicate_1)
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System {
template<typename T>
class Predicate_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::System::Predicate_1);
// Dependencies System.MulticastDelegate
namespace System {
// cpp template
template<typename T>
// Is value type: false
// CS Name: System.Predicate`1<T>
class CORDL_TYPE Predicate_1 : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method Invoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool Invoke(T  obj) ;

static inline ::System::Predicate_1<T>* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Predicate_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Predicate_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Predicate_1(Predicate_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Predicate_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Predicate_1(Predicate_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2053};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Predicate_1, "System", "Predicate`1");
