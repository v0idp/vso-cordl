#pragma once
// IWYU pragma private; include "System/IO/Compression/Match.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/IO/Compression/zzzz__MatchState_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Match)
namespace System::IO::Compression {
struct MatchState;
}
// Forward declare root types
namespace System::IO::Compression {
class Match;
}
// Write type traits
MARK_REF_PTR_T(::System::IO::Compression::Match);
// Dependencies System.IO.Compression.MatchState, System.Object
namespace System::IO::Compression {
// Is value type: false
// CS Name: System.IO.Compression.Match
class CORDL_TYPE Match : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Length, put=set_Length)) int32_t  Length;

 __declspec(property(get=get_Position, put=set_Position)) int32_t  Position;

 __declspec(property(get=get_State, put=set_State)) ::System::IO::Compression::MatchState  State;

 __declspec(property(get=get_Symbol, put=set_Symbol)) uint8_t  Symbol;

/// @brief Field <Length>k__BackingField, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get__Length_k__BackingField, put=__cordl_internal_set__Length_k__BackingField)) int32_t  _Length_k__BackingField;

/// @brief Field <Position>k__BackingField, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get__Position_k__BackingField, put=__cordl_internal_set__Position_k__BackingField)) int32_t  _Position_k__BackingField;

/// @brief Field <State>k__BackingField, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get__State_k__BackingField, put=__cordl_internal_set__State_k__BackingField)) ::System::IO::Compression::MatchState  _State_k__BackingField;

/// @brief Field <Symbol>k__BackingField, offset 0x1c, size 0x1 
 __declspec(property(get=__cordl_internal_get__Symbol_k__BackingField, put=__cordl_internal_set__Symbol_k__BackingField)) uint8_t  _Symbol_k__BackingField;

constexpr int32_t const& __cordl_internal_get__Length_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__Length_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__Position_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__Position_k__BackingField() ;

constexpr ::System::IO::Compression::MatchState const& __cordl_internal_get__State_k__BackingField() const;

constexpr ::System::IO::Compression::MatchState& __cordl_internal_get__State_k__BackingField() ;

constexpr uint8_t const& __cordl_internal_get__Symbol_k__BackingField() const;

constexpr uint8_t& __cordl_internal_get__Symbol_k__BackingField() ;

constexpr void __cordl_internal_set__Length_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__Position_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__State_k__BackingField(::System::IO::Compression::MatchState  value) ;

constexpr void __cordl_internal_set__Symbol_k__BackingField(uint8_t  value) ;

/// @brief Method get_Length, addr 0x2b10760, size 0x8, virtual false, abstract: false, final false
inline int32_t get_Length() ;

/// @brief Method get_Position, addr 0x2b10750, size 0x8, virtual false, abstract: false, final false
inline int32_t get_Position() ;

/// @brief Method get_State, addr 0x2b10740, size 0x8, virtual false, abstract: false, final false
inline ::System::IO::Compression::MatchState get_State() ;

/// @brief Method get_Symbol, addr 0x2b10770, size 0x8, virtual false, abstract: false, final false
inline uint8_t get_Symbol() ;

/// @brief Method set_Length, addr 0x2b10768, size 0x8, virtual false, abstract: false, final false
inline void set_Length(int32_t  value) ;

/// @brief Method set_Position, addr 0x2b10758, size 0x8, virtual false, abstract: false, final false
inline void set_Position(int32_t  value) ;

/// @brief Method set_State, addr 0x2b10748, size 0x8, virtual false, abstract: false, final false
inline void set_State(::System::IO::Compression::MatchState  value) ;

/// @brief Method set_Symbol, addr 0x2b10778, size 0x8, virtual false, abstract: false, final false
inline void set_Symbol(uint8_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Match() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Match", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Match(Match && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Match", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Match(Match const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11285};

/// @brief Field <State>k__BackingField, offset: 0x10, size: 0x4, def value: None
 ::System::IO::Compression::MatchState  ____State_k__BackingField;

/// @brief Field <Position>k__BackingField, offset: 0x14, size: 0x4, def value: None
 int32_t  ____Position_k__BackingField;

/// @brief Field <Length>k__BackingField, offset: 0x18, size: 0x4, def value: None
 int32_t  ____Length_k__BackingField;

/// @brief Field <Symbol>k__BackingField, offset: 0x1c, size: 0x1, def value: None
 uint8_t  ____Symbol_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::IO::Compression::Match, ____State_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::IO::Compression::Match, ____Position_k__BackingField) == 0x14, "Offset mismatch!");

static_assert(offsetof(::System::IO::Compression::Match, ____Length_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::IO::Compression::Match, ____Symbol_k__BackingField) == 0x1c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::IO::Compression::Match, 0x20>, "Size mismatch!");

} // namespace end def System::IO::Compression
NEED_NO_BOX(::System::IO::Compression::Match);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::Compression::Match*, "System.IO.Compression", "Match");
