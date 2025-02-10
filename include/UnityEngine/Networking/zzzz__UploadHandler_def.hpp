#pragma once
// IWYU pragma private; include "UnityEngine/Networking/UploadHandler.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(UploadHandler)
// Forward declare root types
namespace UnityEngine::Networking {
class UploadHandler;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Networking::UploadHandler);
// Dependencies System.IDisposable, System.IntPtr, System.Object
namespace UnityEngine::Networking {
// Is value type: false
// CS Name: UnityEngine.Networking.UploadHandler
class CORDL_TYPE UploadHandler : public ::System::Object {
public:
// Declarations
 __declspec(property(put=set_contentType)) ::StringW  contentType;

/// @brief Field m_Ptr, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Ptr, put=__cordl_internal_set_m_Ptr)) ::System::IntPtr  m_Ptr;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Dispose, addr 0x31990a0, size 0x58, virtual true, abstract: false, final false
inline void Dispose() ;

/// @brief Method Finalize, addr 0x3199004, size 0x9c, virtual true, abstract: false, final false
inline void Finalize() ;

/// @brief Method InternalSetContentType, addr 0x319913c, size 0x44, virtual false, abstract: false, final false
inline void InternalSetContentType(::StringW  newContentType) ;

static inline ::UnityEngine::Networking::UploadHandler* New_ctor() ;

/// @brief Method Release, addr 0x3198fc0, size 0x3c, virtual false, abstract: false, final false
inline void Release() ;

/// @brief Method SetContentType, addr 0x31990f8, size 0x44, virtual true, abstract: false, final false
inline void SetContentType(::StringW  newContentType) ;

constexpr ::System::IntPtr const& __cordl_internal_get_m_Ptr() const;

constexpr ::System::IntPtr& __cordl_internal_get_m_Ptr() ;

constexpr void __cordl_internal_set_m_Ptr(::System::IntPtr  value) ;

/// @brief Method .ctor, addr 0x3198ffc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

/// @brief Method set_contentType, addr 0x3198168, size 0xc, virtual false, abstract: false, final false
inline void set_contentType(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UploadHandler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UploadHandler", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UploadHandler(UploadHandler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UploadHandler", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UploadHandler(UploadHandler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11951};

/// @brief Field m_Ptr, offset: 0x10, size: 0x8, def value: None
 ::System::IntPtr  ___m_Ptr;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Networking::UploadHandler, ___m_Ptr) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Networking::UploadHandler, 0x18>, "Size mismatch!");

} // namespace end def UnityEngine::Networking
NEED_NO_BOX(::UnityEngine::Networking::UploadHandler);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Networking::UploadHandler*, "UnityEngine.Networking", "UploadHandler");
