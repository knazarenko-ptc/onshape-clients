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

#ifndef _OAI_OAIPartStudiosApi_H_
#define _OAI_OAIPartStudiosApi_H_

#include "OAIHttpRequest.h"

#include "OAIBTBoundingBoxInfo.h"
#include "OAIBTConfigurationResponse-2019.h"
#include "OAIBTDocumentElementInfo.h"
#include "OAIBTExportModelBodiesResponse-734.h"
#include "OAIBTExportTessellatedEdgesResponse-327.h"
#include "OAIBTExportTessellatedFacesResponse-898.h"
#include "OAIBTFeatureApiBase-1430.h"
#include "OAIBTFeatureDefinitionCall-1406.h"
#include "OAIBTFeatureDefinitionResponse-1617.h"
#include "OAIBTFeatureListResponse-2457.h"
#include "OAIBTFeatureScriptEvalCall-2377.h"
#include "OAIBTFeatureScriptEvalResponse-1859.h"
#include "OAIBTFeatureSpecsResponse-664.h"
#include "OAIBTIdTranslationInfo.h"
#include "OAIBTIdTranslationParams.h"
#include "OAIBTMassPropertiesBulkInfo.h"
#include "OAIBTModelElementParams.h"
#include "OAIBTNamedViewsInfo.h"
#include "OAIBTRootDiffInfo.h"
#include "OAIBTSetFeatureRollbackResponse-1042.h"
#include "OAIBTShadedViewsInfo.h"
#include "OAIBTTranslateFormatParams.h"
#include "OAIBTTranslationRequestInfo.h"
#include "OAIBTUpdateFeaturesResponse-1333.h"
#include <QString>

#include <QObject>

namespace OpenAPI {

class OAIPartStudiosApi: public QObject {
    Q_OBJECT

public:
    OAIPartStudiosApi();
    OAIPartStudiosApi(QString host, QString basePath);
    ~OAIPartStudiosApi();

    QString host;
    QString basePath;
    QMap<QString, QString> defaultHeaders;

    void addPartStudioFeature(QString* did, QString* wvm, QString* wvmid, QString* eid, OAIBTFeatureDefinitionCall-1406& oaibt_feature_definition_call_1406);
    void comparePartStudios(QString* did, QString* wvm, QString* wvmid, QString* eid, QString* workspace_id, QString* version_id, QString* microversion_id, QString* source_configuration, QString* target_configuration, QString* link_document_id);
    void createPartStudio(QString* did, QString* wid, OAIBTModelElementParams& oaibt_model_element_params);
    void createPartStudioTranslation(QString* did, QString* wv, QString* wvid, QString* eid, OAIBTTranslateFormatParams& oaibt_translate_format_params);
    void deletePartStudioFeature(QString* did, QString* wid, QString* eid, QString* fid);
    void evalFeatureScript(QString* did, QString* wvm, QString* wvmid, QString* eid, QString* configuration, OAIBTFeatureScriptEvalCall-2377& oaibt_feature_script_eval_call_2377);
    void exportPS1(QString* did, QString* wvm, QString* wvmid, QString* eid, QString* part_ids, QString* version, bool include_export_ids, QString* configuration, QString* link_document_id);
    void exportStl1(QString* did, QString* wvm, QString* wvmid, QString* eid, QString* part_ids, QString* mode, bool grouping, double scale, QString* units, double angle_tolerance, double chord_tolerance, double max_facet_width, double min_facet_width, QString* configuration, QString* link_document_id);
    void getPartStudioBodyDetails(QString* did, QString* wvm, QString* wvmid, QString* eid, QString* configuration, QString* link_document_id, qint32 rollback_bar_index, QString*& body);
    void getPartStudioBoundingBoxes(QString* did, QString* wvm, QString* wvmid, QString* eid, bool include_hidden, bool include_wire_bodies, QString* configuration, QString* link_document_id);
    void getPartStudioConfiguration(QString* did, QString* wvm, QString* wvmid, QString* eid);
    void getPartStudioFeatureSpecs(QString* did, QString* wvm, QString* wvmid, QString* eid);
    void getPartStudioFeatures(QString* did, QString* wvm, QString* wvmid, QString* eid, QList<QString*>* feature_id, QString* link_document_id, bool no_sketch_geometry);
    void getPartStudioMassProperties(QString* did, QString* wvm, QString* wvmid, QString* eid, QList<QString*>* part_id, bool mass_as_group, QString* configuration, QString* link_document_id);
    void getPartStudioNamedViews(QString* did, QString* eid, bool skip_perspective, bool include_section_cut_views, QString* link_document_id);
    void getPartStudioShadedViews(QString* did, QString* wvm, QString* wvmid, QString* eid, QString* view_matrix, qint32 output_height, qint32 output_width, double pixel_size, QString* edges, bool show_all_parts, bool include_surfaces, bool use_anti_aliasing, QString* configuration, QString* link_document_id);
    void getPartStudioTessellatedEdges(QString* did, QString* wvm, QString* wvmid, QString* eid, double angle_tolerance, double chord_tolerance, QList<QString*>* part_id, QList<QString*>* edge_id, QString* configuration, QString* link_document_id);
    void getPartStudioTessellatedFaces(QString* did, QString* wvm, QString* wvmid, QString* eid, double angle_tolerance, double chord_tolerance, double max_facet_width, bool output_vertex_normals, bool output_facet_normals, bool output_texture_coordinates, bool output_face_appearances, bool output_index_table, QList<QString*>* part_id, QList<QString*>* face_id, bool output_error_faces, QString* configuration, QString* link_document_id, QString*& body);
    void translateIds(QString* did, QString* wvm, QString* wvmid, QString* eid, OAIBTIdTranslationParams& oaibt_id_translation_params);
    void updateFeatures(QString* did, QString* wid, QString* eid, QString*& body);
    void updatePartStudioConfiguration(QString* did, QString* wvm, QString* wvmid, QString* eid, QString*& body);
    void updatePartStudioFeature(QString* did, QString* wid, QString* eid, QString* fid, QString*& body);
    void updateRollback(QString* did, QString* wid, QString* eid, QString*& body);
    
private:
    void addPartStudioFeatureCallback (OAIHttpRequestWorker * worker);
    void comparePartStudiosCallback (OAIHttpRequestWorker * worker);
    void createPartStudioCallback (OAIHttpRequestWorker * worker);
    void createPartStudioTranslationCallback (OAIHttpRequestWorker * worker);
    void deletePartStudioFeatureCallback (OAIHttpRequestWorker * worker);
    void evalFeatureScriptCallback (OAIHttpRequestWorker * worker);
    void exportPS1Callback (OAIHttpRequestWorker * worker);
    void exportStl1Callback (OAIHttpRequestWorker * worker);
    void getPartStudioBodyDetailsCallback (OAIHttpRequestWorker * worker);
    void getPartStudioBoundingBoxesCallback (OAIHttpRequestWorker * worker);
    void getPartStudioConfigurationCallback (OAIHttpRequestWorker * worker);
    void getPartStudioFeatureSpecsCallback (OAIHttpRequestWorker * worker);
    void getPartStudioFeaturesCallback (OAIHttpRequestWorker * worker);
    void getPartStudioMassPropertiesCallback (OAIHttpRequestWorker * worker);
    void getPartStudioNamedViewsCallback (OAIHttpRequestWorker * worker);
    void getPartStudioShadedViewsCallback (OAIHttpRequestWorker * worker);
    void getPartStudioTessellatedEdgesCallback (OAIHttpRequestWorker * worker);
    void getPartStudioTessellatedFacesCallback (OAIHttpRequestWorker * worker);
    void translateIdsCallback (OAIHttpRequestWorker * worker);
    void updateFeaturesCallback (OAIHttpRequestWorker * worker);
    void updatePartStudioConfigurationCallback (OAIHttpRequestWorker * worker);
    void updatePartStudioFeatureCallback (OAIHttpRequestWorker * worker);
    void updateRollbackCallback (OAIHttpRequestWorker * worker);
    
signals:
    void addPartStudioFeatureSignal(OAIBTFeatureDefinitionResponse-1617* summary);
    void comparePartStudiosSignal(OAIBTRootDiffInfo* summary);
    void createPartStudioSignal(OAIBTDocumentElementInfo* summary);
    void createPartStudioTranslationSignal(OAIBTTranslationRequestInfo* summary);
    void deletePartStudioFeatureSignal(OAIBTFeatureApiBase-1430* summary);
    void evalFeatureScriptSignal(OAIBTFeatureScriptEvalResponse-1859* summary);
    void exportPS1Signal();
    void exportStl1Signal();
    void getPartStudioBodyDetailsSignal(OAIBTExportModelBodiesResponse-734* summary);
    void getPartStudioBoundingBoxesSignal(OAIBTBoundingBoxInfo* summary);
    void getPartStudioConfigurationSignal();
    void getPartStudioFeatureSpecsSignal(OAIBTFeatureSpecsResponse-664* summary);
    void getPartStudioFeaturesSignal(OAIBTFeatureListResponse-2457* summary);
    void getPartStudioMassPropertiesSignal(OAIBTMassPropertiesBulkInfo* summary);
    void getPartStudioNamedViewsSignal(OAIBTNamedViewsInfo* summary);
    void getPartStudioShadedViewsSignal(OAIBTShadedViewsInfo* summary);
    void getPartStudioTessellatedEdgesSignal(OAIBTExportTessellatedEdgesResponse-327* summary);
    void getPartStudioTessellatedFacesSignal(OAIBTExportTessellatedFacesResponse-898* summary);
    void translateIdsSignal(OAIBTIdTranslationInfo* summary);
    void updateFeaturesSignal(OAIBTUpdateFeaturesResponse-1333* summary);
    void updatePartStudioConfigurationSignal(OAIBTConfigurationResponse-2019* summary);
    void updatePartStudioFeatureSignal(OAIBTFeatureDefinitionResponse-1617* summary);
    void updateRollbackSignal(OAIBTSetFeatureRollbackResponse-1042* summary);
    
    void addPartStudioFeatureSignalE(OAIBTFeatureDefinitionResponse-1617* summary, QNetworkReply::NetworkError error_type, QString& error_str);
    void comparePartStudiosSignalE(OAIBTRootDiffInfo* summary, QNetworkReply::NetworkError error_type, QString& error_str);
    void createPartStudioSignalE(OAIBTDocumentElementInfo* summary, QNetworkReply::NetworkError error_type, QString& error_str);
    void createPartStudioTranslationSignalE(OAIBTTranslationRequestInfo* summary, QNetworkReply::NetworkError error_type, QString& error_str);
    void deletePartStudioFeatureSignalE(OAIBTFeatureApiBase-1430* summary, QNetworkReply::NetworkError error_type, QString& error_str);
    void evalFeatureScriptSignalE(OAIBTFeatureScriptEvalResponse-1859* summary, QNetworkReply::NetworkError error_type, QString& error_str);
    void exportPS1SignalE(QNetworkReply::NetworkError error_type, QString& error_str);
    void exportStl1SignalE(QNetworkReply::NetworkError error_type, QString& error_str);
    void getPartStudioBodyDetailsSignalE(OAIBTExportModelBodiesResponse-734* summary, QNetworkReply::NetworkError error_type, QString& error_str);
    void getPartStudioBoundingBoxesSignalE(OAIBTBoundingBoxInfo* summary, QNetworkReply::NetworkError error_type, QString& error_str);
    void getPartStudioConfigurationSignalE(QNetworkReply::NetworkError error_type, QString& error_str);
    void getPartStudioFeatureSpecsSignalE(OAIBTFeatureSpecsResponse-664* summary, QNetworkReply::NetworkError error_type, QString& error_str);
    void getPartStudioFeaturesSignalE(OAIBTFeatureListResponse-2457* summary, QNetworkReply::NetworkError error_type, QString& error_str);
    void getPartStudioMassPropertiesSignalE(OAIBTMassPropertiesBulkInfo* summary, QNetworkReply::NetworkError error_type, QString& error_str);
    void getPartStudioNamedViewsSignalE(OAIBTNamedViewsInfo* summary, QNetworkReply::NetworkError error_type, QString& error_str);
    void getPartStudioShadedViewsSignalE(OAIBTShadedViewsInfo* summary, QNetworkReply::NetworkError error_type, QString& error_str);
    void getPartStudioTessellatedEdgesSignalE(OAIBTExportTessellatedEdgesResponse-327* summary, QNetworkReply::NetworkError error_type, QString& error_str);
    void getPartStudioTessellatedFacesSignalE(OAIBTExportTessellatedFacesResponse-898* summary, QNetworkReply::NetworkError error_type, QString& error_str);
    void translateIdsSignalE(OAIBTIdTranslationInfo* summary, QNetworkReply::NetworkError error_type, QString& error_str);
    void updateFeaturesSignalE(OAIBTUpdateFeaturesResponse-1333* summary, QNetworkReply::NetworkError error_type, QString& error_str);
    void updatePartStudioConfigurationSignalE(OAIBTConfigurationResponse-2019* summary, QNetworkReply::NetworkError error_type, QString& error_str);
    void updatePartStudioFeatureSignalE(OAIBTFeatureDefinitionResponse-1617* summary, QNetworkReply::NetworkError error_type, QString& error_str);
    void updateRollbackSignalE(OAIBTSetFeatureRollbackResponse-1042* summary, QNetworkReply::NetworkError error_type, QString& error_str);
    
    void addPartStudioFeatureSignalEFull(OAIHttpRequestWorker* worker, QNetworkReply::NetworkError error_type, QString& error_str);
    void comparePartStudiosSignalEFull(OAIHttpRequestWorker* worker, QNetworkReply::NetworkError error_type, QString& error_str);
    void createPartStudioSignalEFull(OAIHttpRequestWorker* worker, QNetworkReply::NetworkError error_type, QString& error_str);
    void createPartStudioTranslationSignalEFull(OAIHttpRequestWorker* worker, QNetworkReply::NetworkError error_type, QString& error_str);
    void deletePartStudioFeatureSignalEFull(OAIHttpRequestWorker* worker, QNetworkReply::NetworkError error_type, QString& error_str);
    void evalFeatureScriptSignalEFull(OAIHttpRequestWorker* worker, QNetworkReply::NetworkError error_type, QString& error_str);
    void exportPS1SignalEFull(OAIHttpRequestWorker* worker, QNetworkReply::NetworkError error_type, QString& error_str);
    void exportStl1SignalEFull(OAIHttpRequestWorker* worker, QNetworkReply::NetworkError error_type, QString& error_str);
    void getPartStudioBodyDetailsSignalEFull(OAIHttpRequestWorker* worker, QNetworkReply::NetworkError error_type, QString& error_str);
    void getPartStudioBoundingBoxesSignalEFull(OAIHttpRequestWorker* worker, QNetworkReply::NetworkError error_type, QString& error_str);
    void getPartStudioConfigurationSignalEFull(OAIHttpRequestWorker* worker, QNetworkReply::NetworkError error_type, QString& error_str);
    void getPartStudioFeatureSpecsSignalEFull(OAIHttpRequestWorker* worker, QNetworkReply::NetworkError error_type, QString& error_str);
    void getPartStudioFeaturesSignalEFull(OAIHttpRequestWorker* worker, QNetworkReply::NetworkError error_type, QString& error_str);
    void getPartStudioMassPropertiesSignalEFull(OAIHttpRequestWorker* worker, QNetworkReply::NetworkError error_type, QString& error_str);
    void getPartStudioNamedViewsSignalEFull(OAIHttpRequestWorker* worker, QNetworkReply::NetworkError error_type, QString& error_str);
    void getPartStudioShadedViewsSignalEFull(OAIHttpRequestWorker* worker, QNetworkReply::NetworkError error_type, QString& error_str);
    void getPartStudioTessellatedEdgesSignalEFull(OAIHttpRequestWorker* worker, QNetworkReply::NetworkError error_type, QString& error_str);
    void getPartStudioTessellatedFacesSignalEFull(OAIHttpRequestWorker* worker, QNetworkReply::NetworkError error_type, QString& error_str);
    void translateIdsSignalEFull(OAIHttpRequestWorker* worker, QNetworkReply::NetworkError error_type, QString& error_str);
    void updateFeaturesSignalEFull(OAIHttpRequestWorker* worker, QNetworkReply::NetworkError error_type, QString& error_str);
    void updatePartStudioConfigurationSignalEFull(OAIHttpRequestWorker* worker, QNetworkReply::NetworkError error_type, QString& error_str);
    void updatePartStudioFeatureSignalEFull(OAIHttpRequestWorker* worker, QNetworkReply::NetworkError error_type, QString& error_str);
    void updateRollbackSignalEFull(OAIHttpRequestWorker* worker, QNetworkReply::NetworkError error_type, QString& error_str);
    
};

}
#endif
