#pragma once
// IWYU pragma private; include "RSG/ExceptionEventArgs.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__EventArgs_def.hpp"
CORDL_MODULE_EXPORT(ExceptionEventArgs)
namespace System {
class Exception;
}
// Forward declare root types
namespace RSG {
class ExceptionEventArgs;
}
// Write type traits
MARK_REF_PTR_T(::RSG::ExceptionEventArgs);
// Dependencies System.EventArgs
namespace RSG {
// Is value type: false
// CS Name: RSG.ExceptionEventArgs
class CORDL_TYPE ExceptionEventArgs : public ::System::EventArgs {
public:
// Declarations
 __declspec(property(get=get_Exception, put=set_Exception)) ::System::Exception*  Exception;

/// @brief Field <Exception>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__Exception_k__BackingField, put=__cordl_internal_set__Exception_k__BackingField)) ::System::Exception*  _Exception_k__BackingField;

static inline ::RSG::ExceptionEventArgs* New_ctor(::System::Exception*  exception) ;

constexpr ::System::Exception* const& __cordl_internal_get__Exception_k__BackingField() const;

constexpr ::System::Exception*& __cordl_internal_get__Exception_k__BackingField() ;

constexpr void __cordl_internal_set__Exception_k__BackingField(::System::Exception*  value) ;

/// @brief Method .ctor, addr 0x17f39bc, size 0x6c, virtual false, abstract: false, final false
inline void _ctor(::System::Exception*  exception) ;

/// @brief Method get_Exception, addr 0x17f3a28, size 0x8, virtual false, abstract: false, final false
inline ::System::Exception* get_Exception() ;

/// @brief Method set_Exception, addr 0x17f3a30, size 0x8, virtual false, abstract: false, final false
inline void set_Exception(::System::Exception*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ExceptionEventArgs() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ExceptionEventArgs", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ExceptionEventArgs(ExceptionEventArgs && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ExceptionEventArgs", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ExceptionEventArgs(ExceptionEventArgs const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1698};

/// @brief Field <Exception>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::System::Exception*  ____Exception_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::RSG::ExceptionEventArgs, ____Exception_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::RSG::ExceptionEventArgs, 0x18>, "Size mismatch!");

} // namespace end def RSG
NEED_NO_BOX(::RSG::ExceptionEventArgs);
DEFINE_IL2CPP_ARG_TYPE(::RSG::ExceptionEventArgs*, "RSG", "ExceptionEventArgs");
