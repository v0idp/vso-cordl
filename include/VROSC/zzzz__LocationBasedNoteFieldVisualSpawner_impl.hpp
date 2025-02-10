#pragma once
// IWYU pragma private; include "VROSC/LocationBasedNoteFieldVisualSpawner.hpp"
#include "VROSC/zzzz__NoteFieldVisualSpawner_impl.hpp"
#include "VROSC/zzzz__LocationBasedNoteFieldVisualSpawner_def.hpp"
#include "VROSC/zzzz__LocationBasedNoteFieldVisualSpawner_def.hpp"
#include "VROSC/zzzz__NoteFieldNoteData_def.hpp"
#include "VROSC/zzzz__NoteFieldVisual_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::VROSC::LocationBasedNoteFieldVisualSpawner_Location::LocationBasedNoteFieldVisualSpawner_Location(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::VROSC::LocationBasedNoteFieldVisualSpawner_Location::LocationBasedNoteFieldVisualSpawner_Location()   {
}
constexpr ::VROSC::LocationBasedNoteFieldVisualSpawner_Location  VROSC::LocationBasedNoteFieldVisualSpawner_Location::Corner{static_cast<int32_t>(0x0)};
constexpr ::VROSC::LocationBasedNoteFieldVisualSpawner_Location  VROSC::LocationBasedNoteFieldVisualSpawner_Location::Side{static_cast<int32_t>(0x1)};
constexpr ::VROSC::LocationBasedNoteFieldVisualSpawner_Location  VROSC::LocationBasedNoteFieldVisualSpawner_Location::Center{static_cast<int32_t>(0x2)};
//  Writing Method size for method: ::VROSC::LocationBasedNoteFieldVisualSpawner.IsSideNote
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::VROSC::LocationBasedNoteFieldVisualSpawner::*)(int32_t, int32_t, bool)>(&::VROSC::LocationBasedNoteFieldVisualSpawner::IsSideNote)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x17b75a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LocationBasedNoteFieldVisualSpawner*>::get(),
                        "IsSideNote",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LocationBasedNoteFieldVisualSpawner.GetLocation
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::LocationBasedNoteFieldVisualSpawner_Location (::VROSC::LocationBasedNoteFieldVisualSpawner::*)(::VROSC::NoteFieldNoteData*, ::ArrayW<int32_t,::Array<int32_t>*>)>(&::VROSC::LocationBasedNoteFieldVisualSpawner::GetLocation)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x17b75cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LocationBasedNoteFieldVisualSpawner*>::get(),
                        "GetLocation",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::NoteFieldNoteData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t,::Array<int32_t>*>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LocationBasedNoteFieldVisualSpawner.GetVisual
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::VROSC::NoteFieldVisual> (::VROSC::LocationBasedNoteFieldVisualSpawner::*)(::VROSC::NoteFieldNoteData*, ::ArrayW<int32_t,::Array<int32_t>*>)>(&::VROSC::LocationBasedNoteFieldVisualSpawner::GetVisual)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x17b76b4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LocationBasedNoteFieldVisualSpawner*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LocationBasedNoteFieldVisualSpawner*>::get(),
                                  9
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LocationBasedNoteFieldVisualSpawner._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LocationBasedNoteFieldVisualSpawner::*)()>(&::VROSC::LocationBasedNoteFieldVisualSpawner::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17b76ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LocationBasedNoteFieldVisualSpawner*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::VROSC::NoteFieldVisual>& VROSC::LocationBasedNoteFieldVisualSpawner::__cordl_internal_get__corner()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____corner;
}
constexpr ::UnityW<::VROSC::NoteFieldVisual> const& VROSC::LocationBasedNoteFieldVisualSpawner::__cordl_internal_get__corner() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____corner;
}
constexpr void VROSC::LocationBasedNoteFieldVisualSpawner::__cordl_internal_set__corner(::UnityW<::VROSC::NoteFieldVisual>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____corner)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::NoteFieldVisual>& VROSC::LocationBasedNoteFieldVisualSpawner::__cordl_internal_get__side()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____side;
}
constexpr ::UnityW<::VROSC::NoteFieldVisual> const& VROSC::LocationBasedNoteFieldVisualSpawner::__cordl_internal_get__side() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____side;
}
constexpr void VROSC::LocationBasedNoteFieldVisualSpawner::__cordl_internal_set__side(::UnityW<::VROSC::NoteFieldVisual>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____side)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& VROSC::LocationBasedNoteFieldVisualSpawner::__cordl_internal_get__skipX()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____skipX;
}
constexpr bool const& VROSC::LocationBasedNoteFieldVisualSpawner::__cordl_internal_get__skipX() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____skipX;
}
constexpr void VROSC::LocationBasedNoteFieldVisualSpawner::__cordl_internal_set__skipX(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____skipX = value;
}
constexpr bool& VROSC::LocationBasedNoteFieldVisualSpawner::__cordl_internal_get__skipY()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____skipY;
}
constexpr bool const& VROSC::LocationBasedNoteFieldVisualSpawner::__cordl_internal_get__skipY() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____skipY;
}
constexpr void VROSC::LocationBasedNoteFieldVisualSpawner::__cordl_internal_set__skipY(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____skipY = value;
}
constexpr bool& VROSC::LocationBasedNoteFieldVisualSpawner::__cordl_internal_get__skipZ()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____skipZ;
}
constexpr bool const& VROSC::LocationBasedNoteFieldVisualSpawner::__cordl_internal_get__skipZ() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____skipZ;
}
constexpr void VROSC::LocationBasedNoteFieldVisualSpawner::__cordl_internal_set__skipZ(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____skipZ = value;
}
inline int32_t VROSC::LocationBasedNoteFieldVisualSpawner::IsSideNote(int32_t  noteNumber, int32_t  numberOfFields, bool  skip)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LocationBasedNoteFieldVisualSpawner*>::get(),
                        "IsSideNote",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, noteNumber, numberOfFields, skip);
}
inline ::VROSC::LocationBasedNoteFieldVisualSpawner_Location VROSC::LocationBasedNoteFieldVisualSpawner::GetLocation(::VROSC::NoteFieldNoteData*  data, ::ArrayW<int32_t,::Array<int32_t>*>  numberOfFields)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LocationBasedNoteFieldVisualSpawner*>::get(),
                        "GetLocation",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::NoteFieldNoteData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t,::Array<int32_t>*>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::VROSC::LocationBasedNoteFieldVisualSpawner_Location, false>(this, ___internal_method, data, numberOfFields);
}
inline ::UnityW<::VROSC::NoteFieldVisual> VROSC::LocationBasedNoteFieldVisualSpawner::GetVisual(::VROSC::NoteFieldNoteData*  data, ::ArrayW<int32_t,::Array<int32_t>*>  numberOfFields)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LocationBasedNoteFieldVisualSpawner*>::get(),
                    9
                )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::VROSC::NoteFieldVisual>, false>(this, ___internal_method, data, numberOfFields);
}
inline void VROSC::LocationBasedNoteFieldVisualSpawner::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LocationBasedNoteFieldVisualSpawner*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::LocationBasedNoteFieldVisualSpawner* VROSC::LocationBasedNoteFieldVisualSpawner::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::LocationBasedNoteFieldVisualSpawner*>());
}
// Ctor Parameters []
constexpr ::VROSC::LocationBasedNoteFieldVisualSpawner::LocationBasedNoteFieldVisualSpawner()   {
}
