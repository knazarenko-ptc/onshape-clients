/**
 * Onshape REST API
 * The Onshape REST API consumed by all clients.
 *
 * OpenAPI spec version: 1.111
 * Contact: api-support@onshape.zendesk.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */


#include "OAIBTMSketchConstraint-2.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIBTMSketchConstraint-2::OAIBTMSketchConstraint-2(QString json) {
    init();
    this->fromJson(json);
}

OAIBTMSketchConstraint-2::OAIBTMSketchConstraint-2() {
    init();
}

OAIBTMSketchConstraint-2::~OAIBTMSketchConstraint-2() {
    this->cleanup();
}

void
OAIBTMSketchConstraint-2::init() {
    bt_type = new QString("");
    m_bt_type_isSet = false;
    constraint_type = new QString("");
    m_constraint_type_isSet = false;
    driven_dimension = false;
    m_driven_dimension_isSet = false;
    entity_id = new QString("");
    m_entity_id_isSet = false;
    entity_id_and_replace_in_dependent_fields = new QString("");
    m_entity_id_and_replace_in_dependent_fields_isSet = false;
    has_offset_data1 = false;
    m_has_offset_data1_isSet = false;
    has_offset_data2 = false;
    m_has_offset_data2_isSet = false;
    has_pierce_parameter = false;
    m_has_pierce_parameter_isSet = false;
    help_parameters = new QList<double>();
    m_help_parameters_isSet = false;
    import_microversion = new QString("");
    m_import_microversion_isSet = false;
    _namespace = new QString("");
    m__namespace_isSet = false;
    node_id = new QString("");
    m_node_id_isSet = false;
    offset_distance1 = 0.0;
    m_offset_distance1_isSet = false;
    offset_distance2 = 0.0;
    m_offset_distance2_isSet = false;
    offset_orientation1 = false;
    m_offset_orientation1_isSet = false;
    offset_orientation2 = false;
    m_offset_orientation2_isSet = false;
    parameters = new QList<OAIBTMParameter-1*>();
    m_parameters_isSet = false;
    pierce_parameter = 0.0;
    m_pierce_parameter_isSet = false;
}

void
OAIBTMSketchConstraint-2::cleanup() {
    if(bt_type != nullptr) { 
        delete bt_type;
    }
    if(constraint_type != nullptr) { 
        delete constraint_type;
    }

    if(entity_id != nullptr) { 
        delete entity_id;
    }
    if(entity_id_and_replace_in_dependent_fields != nullptr) { 
        delete entity_id_and_replace_in_dependent_fields;
    }




    if(help_parameters != nullptr) { 
        delete help_parameters;
    }
    if(import_microversion != nullptr) { 
        delete import_microversion;
    }
    if(_namespace != nullptr) { 
        delete _namespace;
    }
    if(node_id != nullptr) { 
        delete node_id;
    }




    if(parameters != nullptr) { 
        auto arr = parameters;
        for(auto o: *arr) { 
            delete o;
        }
        delete parameters;
    }

}

OAIBTMSketchConstraint-2*
OAIBTMSketchConstraint-2::fromJson(QString json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
OAIBTMSketchConstraint-2::fromJsonObject(QJsonObject pJson) {
    ::OpenAPI::setValue(&bt_type, pJson["btType"], "QString", "QString");
    
    ::OpenAPI::setValue(&constraint_type, pJson["constraintType"], "QString", "QString");
    
    ::OpenAPI::setValue(&driven_dimension, pJson["drivenDimension"], "bool", "");
    
    ::OpenAPI::setValue(&entity_id, pJson["entityId"], "QString", "QString");
    
    ::OpenAPI::setValue(&entity_id_and_replace_in_dependent_fields, pJson["entityIdAndReplaceInDependentFields"], "QString", "QString");
    
    ::OpenAPI::setValue(&has_offset_data1, pJson["hasOffsetData1"], "bool", "");
    
    ::OpenAPI::setValue(&has_offset_data2, pJson["hasOffsetData2"], "bool", "");
    
    ::OpenAPI::setValue(&has_pierce_parameter, pJson["hasPierceParameter"], "bool", "");
    
    
    ::OpenAPI::setValue(&help_parameters, pJson["helpParameters"], "QList", "double");
    ::OpenAPI::setValue(&import_microversion, pJson["importMicroversion"], "QString", "QString");
    
    ::OpenAPI::setValue(&_namespace, pJson["namespace"], "QString", "QString");
    
    ::OpenAPI::setValue(&node_id, pJson["nodeId"], "QString", "QString");
    
    ::OpenAPI::setValue(&offset_distance1, pJson["offsetDistance1"], "double", "");
    
    ::OpenAPI::setValue(&offset_distance2, pJson["offsetDistance2"], "double", "");
    
    ::OpenAPI::setValue(&offset_orientation1, pJson["offsetOrientation1"], "bool", "");
    
    ::OpenAPI::setValue(&offset_orientation2, pJson["offsetOrientation2"], "bool", "");
    
    
    ::OpenAPI::setValue(&parameters, pJson["parameters"], "QList", "OAIBTMParameter-1");
    ::OpenAPI::setValue(&pierce_parameter, pJson["pierceParameter"], "double", "");
    
}

QString
OAIBTMSketchConstraint-2::asJson ()
{
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIBTMSketchConstraint-2::asJsonObject() {
    QJsonObject obj;
    if(bt_type != nullptr && *bt_type != QString("")){
        toJsonValue(QString("btType"), bt_type, obj, QString("QString"));
    }
    if(constraint_type != nullptr && *constraint_type != QString("")){
        toJsonValue(QString("constraintType"), constraint_type, obj, QString("QString"));
    }
    if(m_driven_dimension_isSet){
        obj.insert("drivenDimension", QJsonValue(driven_dimension));
    }
    if(entity_id != nullptr && *entity_id != QString("")){
        toJsonValue(QString("entityId"), entity_id, obj, QString("QString"));
    }
    if(entity_id_and_replace_in_dependent_fields != nullptr && *entity_id_and_replace_in_dependent_fields != QString("")){
        toJsonValue(QString("entityIdAndReplaceInDependentFields"), entity_id_and_replace_in_dependent_fields, obj, QString("QString"));
    }
    if(m_has_offset_data1_isSet){
        obj.insert("hasOffsetData1", QJsonValue(has_offset_data1));
    }
    if(m_has_offset_data2_isSet){
        obj.insert("hasOffsetData2", QJsonValue(has_offset_data2));
    }
    if(m_has_pierce_parameter_isSet){
        obj.insert("hasPierceParameter", QJsonValue(has_pierce_parameter));
    }
    if(help_parameters->size() > 0){
        toJsonArray((QList<void*>*)help_parameters, obj, "helpParameters", "");
    }
    if(import_microversion != nullptr && *import_microversion != QString("")){
        toJsonValue(QString("importMicroversion"), import_microversion, obj, QString("QString"));
    }
    if(_namespace != nullptr && *_namespace != QString("")){
        toJsonValue(QString("namespace"), _namespace, obj, QString("QString"));
    }
    if(node_id != nullptr && *node_id != QString("")){
        toJsonValue(QString("nodeId"), node_id, obj, QString("QString"));
    }
    if(m_offset_distance1_isSet){
        obj.insert("offsetDistance1", QJsonValue(offset_distance1));
    }
    if(m_offset_distance2_isSet){
        obj.insert("offsetDistance2", QJsonValue(offset_distance2));
    }
    if(m_offset_orientation1_isSet){
        obj.insert("offsetOrientation1", QJsonValue(offset_orientation1));
    }
    if(m_offset_orientation2_isSet){
        obj.insert("offsetOrientation2", QJsonValue(offset_orientation2));
    }
    if(parameters->size() > 0){
        toJsonArray((QList<void*>*)parameters, obj, "parameters", "OAIBTMParameter-1");
    }
    if(m_pierce_parameter_isSet){
        obj.insert("pierceParameter", QJsonValue(pierce_parameter));
    }

    return obj;
}

QString*
OAIBTMSketchConstraint-2::getBtType() {
    return bt_type;
}
void
OAIBTMSketchConstraint-2::setBtType(QString* bt_type) {
    this->bt_type = bt_type;
    this->m_bt_type_isSet = true;
}

QString*
OAIBTMSketchConstraint-2::getConstraintType() {
    return constraint_type;
}
void
OAIBTMSketchConstraint-2::setConstraintType(QString* constraint_type) {
    this->constraint_type = constraint_type;
    this->m_constraint_type_isSet = true;
}

bool
OAIBTMSketchConstraint-2::isDrivenDimension() {
    return driven_dimension;
}
void
OAIBTMSketchConstraint-2::setDrivenDimension(bool driven_dimension) {
    this->driven_dimension = driven_dimension;
    this->m_driven_dimension_isSet = true;
}

QString*
OAIBTMSketchConstraint-2::getEntityId() {
    return entity_id;
}
void
OAIBTMSketchConstraint-2::setEntityId(QString* entity_id) {
    this->entity_id = entity_id;
    this->m_entity_id_isSet = true;
}

QString*
OAIBTMSketchConstraint-2::getEntityIdAndReplaceInDependentFields() {
    return entity_id_and_replace_in_dependent_fields;
}
void
OAIBTMSketchConstraint-2::setEntityIdAndReplaceInDependentFields(QString* entity_id_and_replace_in_dependent_fields) {
    this->entity_id_and_replace_in_dependent_fields = entity_id_and_replace_in_dependent_fields;
    this->m_entity_id_and_replace_in_dependent_fields_isSet = true;
}

bool
OAIBTMSketchConstraint-2::isHasOffsetData1() {
    return has_offset_data1;
}
void
OAIBTMSketchConstraint-2::setHasOffsetData1(bool has_offset_data1) {
    this->has_offset_data1 = has_offset_data1;
    this->m_has_offset_data1_isSet = true;
}

bool
OAIBTMSketchConstraint-2::isHasOffsetData2() {
    return has_offset_data2;
}
void
OAIBTMSketchConstraint-2::setHasOffsetData2(bool has_offset_data2) {
    this->has_offset_data2 = has_offset_data2;
    this->m_has_offset_data2_isSet = true;
}

bool
OAIBTMSketchConstraint-2::isHasPierceParameter() {
    return has_pierce_parameter;
}
void
OAIBTMSketchConstraint-2::setHasPierceParameter(bool has_pierce_parameter) {
    this->has_pierce_parameter = has_pierce_parameter;
    this->m_has_pierce_parameter_isSet = true;
}

QList<double>*
OAIBTMSketchConstraint-2::getHelpParameters() {
    return help_parameters;
}
void
OAIBTMSketchConstraint-2::setHelpParameters(QList<double>* help_parameters) {
    this->help_parameters = help_parameters;
    this->m_help_parameters_isSet = true;
}

QString*
OAIBTMSketchConstraint-2::getImportMicroversion() {
    return import_microversion;
}
void
OAIBTMSketchConstraint-2::setImportMicroversion(QString* import_microversion) {
    this->import_microversion = import_microversion;
    this->m_import_microversion_isSet = true;
}

QString*
OAIBTMSketchConstraint-2::getNamespace() {
    return _namespace;
}
void
OAIBTMSketchConstraint-2::setNamespace(QString* _namespace) {
    this->_namespace = _namespace;
    this->m__namespace_isSet = true;
}

QString*
OAIBTMSketchConstraint-2::getNodeId() {
    return node_id;
}
void
OAIBTMSketchConstraint-2::setNodeId(QString* node_id) {
    this->node_id = node_id;
    this->m_node_id_isSet = true;
}

double
OAIBTMSketchConstraint-2::getOffsetDistance1() {
    return offset_distance1;
}
void
OAIBTMSketchConstraint-2::setOffsetDistance1(double offset_distance1) {
    this->offset_distance1 = offset_distance1;
    this->m_offset_distance1_isSet = true;
}

double
OAIBTMSketchConstraint-2::getOffsetDistance2() {
    return offset_distance2;
}
void
OAIBTMSketchConstraint-2::setOffsetDistance2(double offset_distance2) {
    this->offset_distance2 = offset_distance2;
    this->m_offset_distance2_isSet = true;
}

bool
OAIBTMSketchConstraint-2::isOffsetOrientation1() {
    return offset_orientation1;
}
void
OAIBTMSketchConstraint-2::setOffsetOrientation1(bool offset_orientation1) {
    this->offset_orientation1 = offset_orientation1;
    this->m_offset_orientation1_isSet = true;
}

bool
OAIBTMSketchConstraint-2::isOffsetOrientation2() {
    return offset_orientation2;
}
void
OAIBTMSketchConstraint-2::setOffsetOrientation2(bool offset_orientation2) {
    this->offset_orientation2 = offset_orientation2;
    this->m_offset_orientation2_isSet = true;
}

QList<OAIBTMParameter-1*>*
OAIBTMSketchConstraint-2::getParameters() {
    return parameters;
}
void
OAIBTMSketchConstraint-2::setParameters(QList<OAIBTMParameter-1*>* parameters) {
    this->parameters = parameters;
    this->m_parameters_isSet = true;
}

double
OAIBTMSketchConstraint-2::getPierceParameter() {
    return pierce_parameter;
}
void
OAIBTMSketchConstraint-2::setPierceParameter(double pierce_parameter) {
    this->pierce_parameter = pierce_parameter;
    this->m_pierce_parameter_isSet = true;
}


bool
OAIBTMSketchConstraint-2::isSet(){
    bool isObjectUpdated = false;
    do{
        if(bt_type != nullptr && *bt_type != QString("")){ isObjectUpdated = true; break;}
        if(constraint_type != nullptr && *constraint_type != QString("")){ isObjectUpdated = true; break;}
        if(m_driven_dimension_isSet){ isObjectUpdated = true; break;}
        if(entity_id != nullptr && *entity_id != QString("")){ isObjectUpdated = true; break;}
        if(entity_id_and_replace_in_dependent_fields != nullptr && *entity_id_and_replace_in_dependent_fields != QString("")){ isObjectUpdated = true; break;}
        if(m_has_offset_data1_isSet){ isObjectUpdated = true; break;}
        if(m_has_offset_data2_isSet){ isObjectUpdated = true; break;}
        if(m_has_pierce_parameter_isSet){ isObjectUpdated = true; break;}
        if(m_help_parameters_isSet){ isObjectUpdated = true; break;}
        if(help_parameters->size() > 0){ isObjectUpdated = true; break;}
        if(import_microversion != nullptr && *import_microversion != QString("")){ isObjectUpdated = true; break;}
        if(_namespace != nullptr && *_namespace != QString("")){ isObjectUpdated = true; break;}
        if(node_id != nullptr && *node_id != QString("")){ isObjectUpdated = true; break;}
        if(m_offset_distance1_isSet){ isObjectUpdated = true; break;}
        if(m_offset_distance2_isSet){ isObjectUpdated = true; break;}
        if(m_offset_orientation1_isSet){ isObjectUpdated = true; break;}
        if(m_offset_orientation2_isSet){ isObjectUpdated = true; break;}
        if(parameters->size() > 0){ isObjectUpdated = true; break;}
        if(m_pierce_parameter_isSet){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}

