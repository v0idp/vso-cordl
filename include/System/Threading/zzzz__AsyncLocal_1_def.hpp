#pragma once
// IWYU pragma private; include "System/Threading/AsyncLocal_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(AsyncLocal_1)
namespace System::Threading {
template<typename T>
struct AsyncLocalValueChangedArgs_1;
}
namespace System {
template<typename T>
class Action_1;
}
// Forward declare root types
namespace System::Threading {
template<typename T>
class AsyncLocal_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::System::Threading::AsyncLocal_1);
// Dependencies System.Object
namespace System::Threading {
// cpp template
template<typename T>
// Is value type: false
// CS Name: System.Threading.AsyncLocal`1<T>
class CORDL_TYPE AsyncLocal_1 : public ::System::Object {
public:
// Declarations
/// @brief Field m_valueChangedHandler, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_valueChangedHandler, put=__cordl_internal_set_m_valueChangedHandler)) ::System::Action_1<::System::Threading::AsyncLocalValueChangedArgs_1<T>>*  m_valueChangedHandler;

constexpr ::System::Action_1<::System::Threading::AsyncLocalValueChangedArgs_1<T>>* const& __cordl_internal_get_m_valueChangedHandler() const;

constexpr ::System::Action_1<::System::Threading::AsyncLocalValueChangedArgs_1<T>>*& __cordl_internal_get_m_valueChangedHandler() ;

constexpr void __cordl_internal_set_m_valueChangedHandler(::System::Action_1<::System::Threading::AsyncLocalValueChangedArgs_1<T>>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AsyncLocal_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AsyncLocal_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AsyncLocal_1(AsyncLocal_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AsyncLocal_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AsyncLocal_1(AsyncLocal_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2369};

/// @brief Field m_valueChangedHandler, offset: 0x10, size: 0x8, def value: None
 ::System::Action_1<::System::Threading::AsyncLocalValueChangedArgs_1<T>>*  ___m_valueChangedHandler;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Threading::AsyncLocal_1, "System.Threading", "AsyncLocal`1");
