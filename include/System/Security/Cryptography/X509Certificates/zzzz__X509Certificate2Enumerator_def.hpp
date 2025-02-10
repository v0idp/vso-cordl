#pragma once
// IWYU pragma private; include "System/Security/Cryptography/X509Certificates/X509Certificate2Enumerator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(X509Certificate2Enumerator)
namespace System::Collections {
class IEnumerator;
}
namespace System::Security::Cryptography::X509Certificates {
class X509Certificate2Collection;
}
namespace System::Security::Cryptography::X509Certificates {
class X509Certificate2;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Security::Cryptography::X509Certificates {
class X509Certificate2Enumerator;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::Cryptography::X509Certificates::X509Certificate2Enumerator);
// Dependencies System.Collections.IEnumerator, System.Object
namespace System::Security::Cryptography::X509Certificates {
// Is value type: false
// CS Name: System.Security.Cryptography.X509Certificates.X509Certificate2Enumerator
class CORDL_TYPE X509Certificate2Enumerator : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Current)) ::System::Security::Cryptography::X509Certificates::X509Certificate2*  Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field enumerator, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_enumerator, put=__cordl_internal_set_enumerator)) ::System::Collections::IEnumerator*  enumerator;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Method MoveNext, addr 0x2d09190, size 0xa0, virtual false, abstract: false, final false
inline bool MoveNext() ;

static inline ::System::Security::Cryptography::X509Certificates::X509Certificate2Enumerator* New_ctor(::System::Security::Cryptography::X509Certificates::X509Certificate2Collection*  collection) ;

/// @brief Method System.Collections.IEnumerator.MoveNext, addr 0x2d092d4, size 0xa0, virtual true, abstract: false, final true
inline bool System_Collections_IEnumerator_MoveNext() ;

/// @brief Method System.Collections.IEnumerator.Reset, addr 0x2d09374, size 0xa4, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x2d09230, size 0xa4, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

constexpr ::System::Collections::IEnumerator* const& __cordl_internal_get_enumerator() const;

constexpr ::System::Collections::IEnumerator*& __cordl_internal_get_enumerator() ;

constexpr void __cordl_internal_set_enumerator(::System::Collections::IEnumerator*  value) ;

/// @brief Method .ctor, addr 0x2d08f60, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::Security::Cryptography::X509Certificates::X509Certificate2Collection*  collection) ;

/// @brief Method get_Current, addr 0x2d090a0, size 0xf0, virtual false, abstract: false, final false
inline ::System::Security::Cryptography::X509Certificates::X509Certificate2* get_Current() ;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr X509Certificate2Enumerator() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "X509Certificate2Enumerator", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
X509Certificate2Enumerator(X509Certificate2Enumerator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "X509Certificate2Enumerator", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
X509Certificate2Enumerator(X509Certificate2Enumerator const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7548};

/// @brief Field enumerator, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::IEnumerator*  ___enumerator;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Security::Cryptography::X509Certificates::X509Certificate2Enumerator, ___enumerator) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::X509Certificates::X509Certificate2Enumerator, 0x18>, "Size mismatch!");

} // namespace end def System::Security::Cryptography::X509Certificates
NEED_NO_BOX(::System::Security::Cryptography::X509Certificates::X509Certificate2Enumerator);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::X509Certificates::X509Certificate2Enumerator*, "System.Security.Cryptography.X509Certificates", "X509Certificate2Enumerator");
