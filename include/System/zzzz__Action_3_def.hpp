#pragma once
// IWYU pragma private; include "System/Action_3.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
CORDL_MODULE_EXPORT(Action_3)
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System {
template<typename T1,typename T2,typename T3>
class Action_3;
}
// Write type traits
MARK_GEN_REF_PTR_T(::System::Action_3);
// Dependencies System.MulticastDelegate
namespace System {
// cpp template
template<typename T1,typename T2,typename T3>
// Is value type: false
// CS Name: System.Action`3<T1,T2,T3>
class CORDL_TYPE Action_3 : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method Invoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Invoke(T1  arg1, T2  arg2, T3  arg3) ;

static inline ::System::Action_3<T1,T2,T3>* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Action_3() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Action_3", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Action_3(Action_3 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Action_3", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Action_3(Action_3 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2036};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Action_3, "System", "Action`3");
