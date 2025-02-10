#pragma once
// IWYU pragma private; include "Firebase/ExceptionAggregator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ExceptionAggregator)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
class Action;
}
namespace System {
class Exception;
}
// Forward declare root types
namespace Firebase {
class ExceptionAggregator;
}
// Write type traits
MARK_REF_PTR_T(::Firebase::ExceptionAggregator);
// Dependencies System.Object
namespace Firebase {
// Is value type: false
// CS Name: Firebase.ExceptionAggregator
class CORDL_TYPE ExceptionAggregator : public ::System::Object {
public:
// Declarations
/// @brief Field threadLocalExceptions, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_threadLocalExceptions, put=setStaticF_threadLocalExceptions)) ::System::Collections::Generic::List_1<::System::Exception*>*  threadLocalExceptions;

/// @brief Method GetAndClearPendingExceptions, addr 0x1921d1c, size 0x11c, virtual false, abstract: false, final false
static inline ::System::Exception* GetAndClearPendingExceptions() ;

/// @brief Method LogException, addr 0x1921e38, size 0x454, virtual false, abstract: false, final false
static inline ::System::Exception* LogException(::System::Exception*  exception) ;

/// @brief Method ThrowAndClearPendingExceptions, addr 0x191fc08, size 0x34, virtual false, abstract: false, final false
static inline void ThrowAndClearPendingExceptions() ;

/// @brief Method Wrap, addr 0x191faf4, size 0x114, virtual false, abstract: false, final false
static inline void Wrap(::System::Action*  action) ;

static inline ::System::Collections::Generic::List_1<::System::Exception*>* getStaticF_threadLocalExceptions() ;

/// @brief Method get_Exceptions, addr 0x1921c74, size 0xa8, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::List_1<::System::Exception*>* get_Exceptions() ;

static inline void setStaticF_threadLocalExceptions(::System::Collections::Generic::List_1<::System::Exception*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ExceptionAggregator() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ExceptionAggregator", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ExceptionAggregator(ExceptionAggregator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ExceptionAggregator", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ExceptionAggregator(ExceptionAggregator const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12197};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Firebase::ExceptionAggregator, 0x10>, "Size mismatch!");

} // namespace end def Firebase
NEED_NO_BOX(::Firebase::ExceptionAggregator);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::ExceptionAggregator*, "Firebase", "ExceptionAggregator");
