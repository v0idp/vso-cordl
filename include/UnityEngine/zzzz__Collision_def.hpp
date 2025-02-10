#pragma once
// IWYU pragma private; include "UnityEngine/Collision.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__ContactPairHeader_def.hpp"
#include "UnityEngine/zzzz__ContactPair_def.hpp"
CORDL_MODULE_EXPORT(Collision)
namespace UnityEngine {
struct ContactPairHeader;
}
namespace UnityEngine {
struct ContactPair;
}
namespace UnityEngine {
struct ContactPoint;
}
// Forward declare root types
namespace UnityEngine {
class Collision;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Collision);
// Dependencies System.Object, UnityEngine.ContactPair, UnityEngine.ContactPairHeader
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.Collision
class CORDL_TYPE Collision : public ::System::Object {
public:
// Declarations
 __declspec(property(put=set_Flipped)) bool  Flipped;

 __declspec(property(get=get_contacts)) ::ArrayW<::UnityEngine::ContactPoint,::Array<::UnityEngine::ContactPoint>*>  contacts;

/// @brief Field m_Flipped, offset 0x60, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_Flipped, put=__cordl_internal_set_m_Flipped)) bool  m_Flipped;

/// @brief Field m_Header, offset 0x10, size 0x28 
 __declspec(property(get=__cordl_internal_get_m_Header, put=__cordl_internal_set_m_Header)) ::UnityEngine::ContactPairHeader  m_Header;

/// @brief Field m_LegacyContacts, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_LegacyContacts, put=__cordl_internal_set_m_LegacyContacts)) ::ArrayW<::UnityEngine::ContactPoint,::Array<::UnityEngine::ContactPoint>*>  m_LegacyContacts;

/// @brief Field m_Pair, offset 0x38, size 0x28 
 __declspec(property(get=__cordl_internal_get_m_Pair, put=__cordl_internal_set_m_Pair)) ::UnityEngine::ContactPair  m_Pair;

static inline ::UnityEngine::Collision* New_ctor() ;

static inline ::UnityEngine::Collision* New_ctor(::ByRef<::UnityEngine::ContactPairHeader>  header, ::ByRef<::UnityEngine::ContactPair>  pair, bool  flipped) ;

/// @brief Method Reuse, addr 0x2fc25bc, size 0x30, virtual false, abstract: false, final false
inline void Reuse(::ByRef<::UnityEngine::ContactPairHeader>  header, ::ByRef<::UnityEngine::ContactPair>  pair) ;

constexpr bool const& __cordl_internal_get_m_Flipped() const;

constexpr bool& __cordl_internal_get_m_Flipped() ;

constexpr ::UnityEngine::ContactPairHeader const& __cordl_internal_get_m_Header() const;

constexpr ::UnityEngine::ContactPairHeader& __cordl_internal_get_m_Header() ;

constexpr ::ArrayW<::UnityEngine::ContactPoint,::Array<::UnityEngine::ContactPoint>*> const& __cordl_internal_get_m_LegacyContacts() const;

constexpr ::ArrayW<::UnityEngine::ContactPoint,::Array<::UnityEngine::ContactPoint>*>& __cordl_internal_get_m_LegacyContacts() ;

constexpr ::UnityEngine::ContactPair const& __cordl_internal_get_m_Pair() const;

constexpr ::UnityEngine::ContactPair& __cordl_internal_get_m_Pair() ;

constexpr void __cordl_internal_set_m_Flipped(bool  value) ;

constexpr void __cordl_internal_set_m_Header(::UnityEngine::ContactPairHeader  value) ;

constexpr void __cordl_internal_set_m_LegacyContacts(::ArrayW<::UnityEngine::ContactPoint,::Array<::UnityEngine::ContactPoint>*>  value) ;

constexpr void __cordl_internal_set_m_Pair(::UnityEngine::ContactPair  value) ;

/// @brief Method .ctor, addr 0x2fc24ac, size 0x34, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x2fc24e0, size 0xdc, virtual false, abstract: false, final false
inline void _ctor(::ByRef<::UnityEngine::ContactPairHeader>  header, ::ByRef<::UnityEngine::ContactPair>  pair, bool  flipped) ;

/// @brief Method get_contacts, addr 0x2fc23b4, size 0xa4, virtual false, abstract: false, final false
inline ::ArrayW<::UnityEngine::ContactPoint,::Array<::UnityEngine::ContactPoint>*> get_contacts() ;

/// @brief Method set_Flipped, addr 0x2fc23a8, size 0xc, virtual false, abstract: false, final false
inline void set_Flipped(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Collision() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Collision", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Collision(Collision && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Collision", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Collision(Collision const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12068};

/// @brief Field m_Header, offset: 0x10, size: 0x28, def value: None
 ::UnityEngine::ContactPairHeader  ___m_Header;

/// @brief Field m_Pair, offset: 0x38, size: 0x28, def value: None
 ::UnityEngine::ContactPair  ___m_Pair;

/// @brief Field m_Flipped, offset: 0x60, size: 0x1, def value: None
 bool  ___m_Flipped;

/// @brief Field m_LegacyContacts, offset: 0x68, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::ContactPoint,::Array<::UnityEngine::ContactPoint>*>  ___m_LegacyContacts;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Collision, ___m_Header) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Collision, ___m_Pair) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Collision, ___m_Flipped) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Collision, ___m_LegacyContacts) == 0x68, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Collision, 0x70>, "Size mismatch!");

} // namespace end def UnityEngine
NEED_NO_BOX(::UnityEngine::Collision);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Collision*, "UnityEngine", "Collision");
