#pragma once
// IWYU pragma private; include "UnityEngine/MissingReferenceException.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Exception_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(MissingReferenceException)
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
// Forward declare root types
namespace UnityEngine {
class MissingReferenceException;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::MissingReferenceException);
// Dependencies System.Exception
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.MissingReferenceException
class CORDL_TYPE MissingReferenceException : public ::System::Exception {
public:
// Declarations
static inline ::UnityEngine::MissingReferenceException* New_ctor() ;

static inline ::UnityEngine::MissingReferenceException* New_ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

static inline ::UnityEngine::MissingReferenceException* New_ctor(::StringW  message) ;

/// @brief Method .ctor, addr 0x2f8dce4, size 0x80, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x2f8dd64, size 0x80, virtual false, abstract: false, final false
inline void _ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method .ctor, addr 0x2f8c0fc, size 0x78, virtual false, abstract: false, final false
inline void _ctor(::StringW  message) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MissingReferenceException() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MissingReferenceException", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MissingReferenceException(MissingReferenceException && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MissingReferenceException", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MissingReferenceException(MissingReferenceException const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8609};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::MissingReferenceException, 0x90>, "Size mismatch!");

} // namespace end def UnityEngine
NEED_NO_BOX(::UnityEngine::MissingReferenceException);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::MissingReferenceException*, "UnityEngine", "MissingReferenceException");
