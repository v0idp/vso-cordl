#pragma once
// IWYU pragma private; include "UnityEngine/Events/InvokableCall_3.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Events/zzzz__BaseInvokableCall_def.hpp"
CORDL_MODULE_EXPORT(InvokableCall_3)
namespace System::Reflection {
class MethodInfo;
}
namespace System {
class Object;
}
namespace UnityEngine::Events {
template<typename T0,typename T1,typename T2>
class UnityAction_3;
}
// Forward declare root types
namespace UnityEngine::Events {
template<typename T1,typename T2,typename T3>
class InvokableCall_3;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::Events::InvokableCall_3);
// Dependencies UnityEngine.Events.BaseInvokableCall
namespace UnityEngine::Events {
// cpp template
template<typename T1,typename T2,typename T3>
// Is value type: false
// CS Name: UnityEngine.Events.InvokableCall`3<T1,T2,T3>
class CORDL_TYPE InvokableCall_3 : public ::UnityEngine::Events::BaseInvokableCall {
public:
// Declarations
/// @brief Field Delegate, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_Delegate, put=__cordl_internal_set_Delegate)) ::UnityEngine::Events::UnityAction_3<T1,T2,T3>*  Delegate;

/// @brief Method Find, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool Find(::System::Object*  targetObj, ::System::Reflection::MethodInfo*  method) ;

/// @brief Method Invoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Invoke(::ArrayW<::System::Object*,::Array<::System::Object*>*>  args) ;

/// @brief Method Invoke, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Invoke(T1  args0, T2  args1, T3  args2) ;

static inline ::UnityEngine::Events::InvokableCall_3<T1,T2,T3>* New_ctor(::System::Object*  target, ::System::Reflection::MethodInfo*  theFunction) ;

constexpr ::UnityEngine::Events::UnityAction_3<T1,T2,T3>* const& __cordl_internal_get_Delegate() const;

constexpr ::UnityEngine::Events::UnityAction_3<T1,T2,T3>*& __cordl_internal_get_Delegate() ;

constexpr void __cordl_internal_set_Delegate(::UnityEngine::Events::UnityAction_3<T1,T2,T3>*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  target, ::System::Reflection::MethodInfo*  theFunction) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InvokableCall_3() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InvokableCall_3", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InvokableCall_3(InvokableCall_3 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InvokableCall_3", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InvokableCall_3(InvokableCall_3 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8669};

/// @brief Field Delegate, offset: 0x10, size: 0x8, def value: None
 ::UnityEngine::Events::UnityAction_3<T1,T2,T3>*  ___Delegate;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Events
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::Events::InvokableCall_3, "UnityEngine.Events", "InvokableCall`3");
