#pragma once
// IWYU pragma private; include "RSG/PromiseCancelledException.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Exception_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(PromiseCancelledException)
// Forward declare root types
namespace RSG {
class PromiseCancelledException;
}
// Write type traits
MARK_REF_PTR_T(::RSG::PromiseCancelledException);
// Dependencies System.Exception
namespace RSG {
// Is value type: false
// CS Name: RSG.PromiseCancelledException
class CORDL_TYPE PromiseCancelledException : public ::System::Exception {
public:
// Declarations
static inline ::RSG::PromiseCancelledException* New_ctor() ;

static inline ::RSG::PromiseCancelledException* New_ctor(::StringW  message) ;

/// @brief Method .ctor, addr 0x17f2ef8, size 0x58, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x17f2f50, size 0x68, virtual false, abstract: false, final false
inline void _ctor(::StringW  message) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PromiseCancelledException() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PromiseCancelledException", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PromiseCancelledException(PromiseCancelledException && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PromiseCancelledException", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PromiseCancelledException(PromiseCancelledException const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1688};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RSG::PromiseCancelledException, 0x90>, "Size mismatch!");

} // namespace end def RSG
NEED_NO_BOX(::RSG::PromiseCancelledException);
DEFINE_IL2CPP_ARG_TYPE(::RSG::PromiseCancelledException*, "RSG", "PromiseCancelledException");
