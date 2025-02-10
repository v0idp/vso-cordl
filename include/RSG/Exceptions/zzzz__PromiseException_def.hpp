#pragma once
// IWYU pragma private; include "RSG/Exceptions/PromiseException.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Exception_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(PromiseException)
namespace System {
class Exception;
}
// Forward declare root types
namespace RSG::Exceptions {
class PromiseException;
}
// Write type traits
MARK_REF_PTR_T(::RSG::Exceptions::PromiseException);
// Dependencies System.Exception
namespace RSG::Exceptions {
// Is value type: false
// CS Name: RSG.Exceptions.PromiseException
class CORDL_TYPE PromiseException : public ::System::Exception {
public:
// Declarations
static inline ::RSG::Exceptions::PromiseException* New_ctor() ;

static inline ::RSG::Exceptions::PromiseException* New_ctor(::StringW  message) ;

static inline ::RSG::Exceptions::PromiseException* New_ctor(::StringW  message, ::System::Exception*  inner) ;

/// @brief Method .ctor, addr 0x17f7518, size 0x58, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x17f7570, size 0x68, virtual false, abstract: false, final false
inline void _ctor(::StringW  message) ;

/// @brief Method .ctor, addr 0x17f75d8, size 0x70, virtual false, abstract: false, final false
inline void _ctor(::StringW  message, ::System::Exception*  inner) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PromiseException() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PromiseException", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PromiseException(PromiseException && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PromiseException", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PromiseException(PromiseException const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1727};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RSG::Exceptions::PromiseException, 0x90>, "Size mismatch!");

} // namespace end def RSG::Exceptions
NEED_NO_BOX(::RSG::Exceptions::PromiseException);
DEFINE_IL2CPP_ARG_TYPE(::RSG::Exceptions::PromiseException*, "RSG.Exceptions", "PromiseException");
